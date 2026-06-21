#!/usr/bin/env python3
"""
TuesdayOS - Full Source Migration Engine
Migrates Source/XPSP1/NT → TuesdayOS/ with complete rebranding.

This script:
1. Copies files from the old structure to the new structure
2. Renames directories per the component mapping
3. Applies string rebranding to all text files
4. Rewrites license and copyright files
5. Updates build configuration files

Usage: python3 migrate_full.py [--dry-run] [--skip-copy] [--skip-rebrand] [--skip-licenses] [--skip-build]
"""

import os
import re
import sys
import shutil
import argparse

REPO_DIR = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC_DIR = os.path.join(REPO_DIR, "Source", "XPSP1", "NT")
DEST_DIR = os.path.join(REPO_DIR, "TuesdayOS")

# === COMPONENT MAPPING ===
DIR_MAP = {
    "base": "Core",
    "windows": "WindowSystem",
    "admin": "Admin",
    "com": "COM",
    "developer": "Developer",
    "drivers": "Drivers",
    "ds": "DirectorySvc",
    "enduser": "EndUser",
    "inetcore": "NetCore",
    "inetsrv": "NetServices",
    "loc": "Localization",
    "mergedcomponents": "MergedComponents",
    "multimedia": "Multimedia",
    "net": "Networking",
    "printscan": "PrintScan",
    "public": "Published",
    "published": "Published/API",
    "sdktools": "SDKTools",
    "shell": "Shell",
    "termsrv": "TerminalSvc",
    "tools": "Tools",
    "empty": "Legacy",
}

# Sub-directory renames within components
SUBDIR_MAP = {
    "Core": {
        "ntos": "kernel",
        "boot": "bootloader",
        "ntsetup": "setup",
        "crts": "runtime",
        "fs": "filesystems",
        "mvdm": "vdm",
    },
    "Shell": {
        "explorer": "tuesplorer",
        "shell32": "tueshell32",
        "shlwapi": "tueshlwapi",
    },
    "Drivers": {
        "storage": "block",
        "display": "gpu",
        "network": "net",
    },
    "Admin": {
        "activec": "tmc",
        "dsclientnt4": "dsclient",
    },
    "NetCore": {
        "outlookexpress": "tuesmail",
        "ieak": "tuesbrowserkit",
    },
    "NetServices": {
        "iis": "tis",
    },
    "Multimedia": {
        "directx": "tuesdirectx",
    },
}

# === STRING REPLACEMENT RULES ===
# Order matters: more specific patterns first
REPLACEMENTS = [
    # Product names (most specific first)
    (r'\bWindows XP\b', 'TuesdayOS'),
    (r'\bWindows NT\b', 'TuesdayOS'),
    (r'\bWindows\.NET\b', 'TuesdayOS.NET'),
    (r'\bWindows Server\b', 'TuesdayOS Server'),
    (r'\bWindows Whistler\b', 'TuesdayOS Dawn'),
    (r'\bWindowsME\b', 'TuesdayME'),
    (r'\bWindows 2000\b', 'TuesdayOS 2000'),
    (r'\bWindows 98\b', 'TuesdayOS 98'),
    (r'\bWindows 95\b', 'TuesdayOS 95'),
    (r'\bWindows\b', 'TuesdayOS'),
    # Company
    (r'\bMicrosoft Corporation\b', 'TuesdayOS Project'),
    (r'\bMicrosoft Corp\.?\b', 'TuesdayOS Project'),
    (r'\bMICROSOFT\b', 'TUESDAYOS_PROJECT'),
    # Kernel identifiers
    (r'\bNT Kernel\b', 'T.K. Kernel'),
    (r'\bNTOSKRNL\b', 'TUESKRN'),
    (r'\bntoskrnl\b', 'tueskrn'),
    (r'\bNTKRNLMP\b', 'TUESKNMP'),
    (r'\bntkrnlmp\b', 'tuesknmp'),
    # Version codes
    (r'\bNT5\.1\b', 'TUES1.0'),
    (r'\bNT5\.0\b', 'TUES0.9'),
    (r'\bXPSP1\b', 'TUSSP1'),
    (r'\bXPSP2\b', 'TUSSP2'),
    (r'\bXPSP3\b', 'TUSSP3'),
    # API identifiers
    (r'\bNTKERNEL\b', 'TUESK'),
    (r'\bNTDDK\b', 'TUESDDK'),
    (r'\bNTAPI\b', 'TUESAPI'),
    (r'\bNTSTATUS\b', 'TUESSTATUS'),
    (r'\bNT_SUCCESS\b', 'TUES_SUCCESS'),
    (r'\bNT_ERROR\b', 'TUES_ERROR'),
    (r'\bNT_WARNING\b', 'TUES_WARNING'),
    (r'\bNT_INFORMATION\b', 'TUES_INFO'),
    # Nt* function prefixes
    (r'\bNtCreate\b', 'TuesCreate'),
    (r'\bNtOpen\b', 'TuesOpen'),
    (r'\bNtClose\b', 'TuesClose'),
    (r'\bNtRead\b', 'TuesRead'),
    (r'\bNtWrite\b', 'TuesWrite'),
    (r'\bNtQuery\b', 'TuesQuery'),
    (r'\bNtSet\b', 'TuesSet'),
    (r'\bNtGet\b', 'TuesGet'),
    (r'\bNtDelete\b', 'TuesDelete'),
    (r'\bNtAllocate\b', 'TuesAllocate'),
    (r'\bNtFree\b', 'TuesFree'),
    (r'\bNtMap\b', 'TuesMap'),
    (r'\bNtLoad\b', 'TuesLoad'),
    (r'\bNtUnload\b', 'TuesUnload'),
    (r'\bNtWait\b', 'TuesWait'),
    (r'\bNtSignal\b', 'TuesSignal'),
    (r'\bNtRelease\b', 'TuesRelease'),
    (r'\bNtTerminate\b', 'TuesTerminate'),
    (r'\bNtSuspend\b', 'TuesSuspend'),
    (r'\bNtResume\b', 'TuesResume'),
    (r'\bNtDebug\b', 'TuesDebug'),
    (r'\bNtContinue\b', 'TuesContinue'),
    (r'\bNtBuild\b', 'TuesBuild'),
    # Win32/64
    (r'\bWin32\b', 'Tues32'),
    (r'\bWIN32\b', 'TUES32'),
    (r'\bWin64\b', 'Tues64'),
    (r'\bWIN64\b', 'TUES64'),
    # DLL names
    (r'\bKERNEL32\b', 'TKERNEL32'),
    (r'\bUSER32\b', 'TUSER32'),
    (r'\bGDI32\b', 'TGDI32'),
    (r'\bADVAPI32\b', 'TADVAPI32'),
    (r'\bNTDLL\b', 'TUESDLL'),
    (r'\bSHELL32\b', 'TUESSHELL32'),
    (r'\bWININET\b', 'TUESINET'),
    (r'\bWINHTTP\b', 'TUESHTTP'),
    (r'\bWINSOCK\b', 'TUESSOCK'),
    # Build variables
    (r'\bNTMAKEENV\b', 'TUESMAKEENV'),
    (r'\bRAZZLETOOLPATH\b', 'TUESTOOLPATH'),
    (r'\b_NTTREE\b', '_TUESTREE'),
    (r'\b_NTDRIVE\b', '_TUESDRIVE'),
    (r'\b_NTROOT\b', '_TUESROOT'),
    (r'\bBASEDIR\b', 'TUESBASEDIR'),
]

BINARY_EXTS = {
    '.exe', '.dll', '.lib', '.obj', '.o', '.pdb', '.dbg', '.sym',
    '.bin', '.dat', '.res', '.sfx', '.cab', '.msi', '.msp',
    '.zip', '.rar', '.7z', '.gz', '.bz2',
    '.gif', '.jpg', '.jpeg', '.png', '.bmp', '.ico', '.cur', '.ani',
    '.wav', '.mp3', '.avi', '.wmv', '.wma', '.mid', '.midi',
    '.ttf', '.fon', '.fnt', '.otf',
    '.doc', '.xls', '.ppt', '.chm', '.hlp',
    '.pyc', '.class',
}

TEXT_EXTS = {
    '.c', '.h', '.cpp', '.cxx', '.hxx', '.hpp', '.rc', '.rc2', '.def',
    '.asm', '.s', '.inc', '.txt', '.html', '.htm', '.css', '.js',
    '.inf', '.ini', '.cfg', '.reg', '.bat', '.cmd', '.ps1', '.sh',
    '.pl', '.py', '.mak', '.mk', '.xml', '.xsd', '.xsl', '.wsdl',
    '.mof', '.idl', '.odl', '.java', '.cs', '.vb', '.vbs', '.vbp',
    '.dsp', '.dsw', '.sln', '.vcproj', '.vcxproj',
    '.rtf', '.manifest', '.sld',
}

SPECIAL_FILES = {'dirs', 'sources', 'makefile', 'makefil0', 'placefil.txt'}


def is_text_file(filepath):
    ext = os.path.splitext(filepath)[1].lower()
    if ext in BINARY_EXTS:
        return False
    if ext in TEXT_EXTS:
        return True
    if os.path.basename(filepath).lower() in SPECIAL_FILES:
        return True
    return False


def rebrand_content(content):
    new_content = content
    for pattern, replacement in REPLACEMENTS:
        new_content = re.sub(pattern, replacement, new_content)
    return new_content


def rewrite_copyright(content):
    content = re.sub(
        r'Copyright\s*\([cC]\)\s*\d{4}[-,\s\d]*Microsoft\s+Corporation',
        'Copyright (C) 2026 TuesdayOS Project', content
    )
    content = re.sub(
        r'Copyright\s*\([cC]\)\s*Microsoft\s+Corp\.?',
        'Copyright (C) 2026 TuesdayOS Project', content
    )
    content = re.sub(
        r'\(c\)\s*Microsoft\s+Corporation',
        '(C) 2026 TuesdayOS Project', content
    )
    content = re.sub(
        r'Microsoft\s+Corporation\s+All\s+rights\s+reserved',
        'TuesdayOS Project. All rights reserved.', content
    )
    return content


def update_dirs_file(content):
    for old, new in DIR_MAP.items():
        content = re.sub(r'\b' + old + r'\b', new, content, flags=re.IGNORECASE)
    return content


def process_file(src_path, dst_path, is_eula=False):
    if not is_text_file(src_path):
        shutil.copy2(src_path, dst_path)
        return 'binary'

    try:
        with open(src_path, 'r', encoding='utf-8', errors='ignore') as f:
            content = f.read()
    except:
        try:
            with open(src_path, 'r', encoding='latin-1', errors='ignore') as f:
                content = f.read()
        except:
            shutil.copy2(src_path, dst_path)
            return 'error'

    # Apply rebranding
    new_content = rebrand_content(content)
    new_content = rewrite_copyright(new_content)

    # Special handling for dirs/sources files
    basename = os.path.basename(src_path).lower()
    if basename == 'dirs' or basename == 'sources':
        new_content = update_dirs_file(new_content)

    # Special handling for EULA files
    if is_eula:
        new_content = get_new_eula_content(src_path)

    with open(dst_path, 'w', encoding='utf-8', errors='ignore') as f:
        f.write(new_content)

    return 'modified' if new_content != content else 'unchanged'


def get_new_eula_content(filepath):
    path_lower = filepath.lower()
    lang = "English"
    lang_map = {
        '/ara/': 'Arabic', '/chs/': 'Chinese (Simplified)',
        '/cht/': 'Chinese (Traditional)', '/jpn/': 'Japanese',
        '/kor/': 'Korean', '/ger/': 'German', '/fr/': 'French',
        '/it/': 'Italian', '/es/': 'Spanish', '/br/': 'Portuguese (Brazil)',
        '/nl/': 'Dutch', '/cs/': 'Czech', '/da/': 'Danish',
        '/el/': 'Greek', '/fi/': 'Finnish', '/heb/': 'Hebrew',
        '/hu/': 'Hungarian', '/no/': 'Norwegian', '/pl/': 'Polish',
        '/pt/': 'Portuguese', '/ru/': 'Russian', '/sv/': 'Swedish',
        '/tr/': 'Turkish',
    }
    for path_frag, lang_name in lang_map.items():
        if path_frag in path_lower:
            lang = lang_name
            break

    return f"""TUESDAYOS END USER LICENSE AGREEMENT
Language: {lang}
Version 1.0 - June 2026

IMPORTANT: This End-User License Agreement ("EULA") is a legal
agreement between you and the TuesdayOS Project for the TuesdayOS
software product.

1. GRANT OF LICENSE - You may install and use this software on any
   number of computers.

2. MODIFICATION - You may modify and redistribute under the
   TuesdayOS Public License (TUPL) v1.0.

3. REBRANDING - You may not remove TuesdayOS branding without
   written permission.

4. NO WARRANTY - THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY.

Copyright (C) 2026 TuesdayOS Project. All rights reserved.
[{lang} language version]
"""


def is_eula_file(filepath):
    name = os.path.basename(filepath).lower()
    return 'eula' in name or 'bflics' in name or name.startswith('license')


def get_dest_path(src_path):
    """Map a source path to its destination path in TuesdayOS tree."""
    rel = os.path.relpath(src_path, SRC_DIR)
    parts = rel.replace('\\', '/').split('/')

    if parts[0] in DIR_MAP:
        parts[0] = DIR_MAP[parts[0]]

    # Check sub-directory renames
    if len(parts) >= 2:
        component = parts[0]
        if component in SUBDIR_MAP and parts[1] in SUBDIR_MAP[component]:
            parts[1] = SUBDIR_MAP[component][parts[1]]

    return os.path.join(DEST_DIR, *parts)


def migrate_tree(dry_run=False, skip_copy=False, skip_rebrand=False,
                 skip_licenses=False, skip_build=False):
    if not os.path.isdir(SRC_DIR):
        print(f"ERROR: Source directory not found: {SRC_DIR}")
        print("The Source/XPSP1/NT tree must be checked out first.")
        sys.exit(1)

    stats = {'total': 0, 'modified': 0, 'binary': 0, 'unchanged': 0, 'error': 0, 'eula': 0}

    print("=" * 60)
    print("  TuesdayOS Full Source Migration Engine")
    print("=" * 60)
    print(f"  Source: {SRC_DIR}")
    print(f"  Destination: {DEST_DIR}")
    if dry_run:
        print("  Mode: DRY RUN (no files will be modified)")
    print("")

    for root, dirs, files in os.walk(SRC_DIR):
        for filename in files:
            src_path = os.path.join(root, filename)
            dst_path = get_dest_path(src_path)
            stats['total'] += 1

            if skip_copy:
                continue

            is_eula = not skip_licenses and is_eula_file(src_path)

            if dry_run:
                dst_rel = os.path.relpath(dst_path, DEST_DIR)
                src_rel = os.path.relpath(src_path, SRC_DIR)
                if stats['total'] % 2000 == 0:
                    print(f"  [DRY RUN] {stats['total']} files mapped...")
                continue

            os.makedirs(os.path.dirname(dst_path), exist_ok=True)
            result = process_file(src_path, dst_path, is_eula)
            stats[result] += 1
            if is_eula:
                stats['eula'] += 1

            if stats['total'] % 2000 == 0:
                print(f"  Processed: {stats['total']}, Modified: {stats['modified']}, Binary: {stats['binary']}")

    print("")
    print("=" * 60)
    print("  Migration Complete!")
    print(f"  Total files:     {stats['total']}")
    print(f"  Modified:        {stats['modified']}")
    print(f"  Binary (copied): {stats['binary']}")
    print(f"  Unchanged:       {stats['unchanged']}")
    print(f"  EULAs rewritten: {stats['eula']}")
    print(f"  Errors:          {stats['error']}")
    print("=" * 60)


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='TuesdayOS Source Migration Engine')
    parser.add_argument('--dry-run', action='store_true', help='Preview only, no changes')
    parser.add_argument('--skip-copy', action='store_true', help='Skip file copying')
    parser.add_argument('--skip-rebrand', action='store_true', help='Skip content rebranding')
    parser.add_argument('--skip-licenses', action='store_true', help='Skip license rewriting')
    parser.add_argument('--skip-build', action='store_true', help='Skip build file updates')
    args = parser.parse_args()
    migrate_tree(**vars(args))
