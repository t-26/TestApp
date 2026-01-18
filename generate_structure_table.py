from pathlib import Path

IGNORE = {'.git', '__pycache__', 'node_modules'}
OUTPUT = Path("STRUCTURE.md")  # ここを変更すれば出力先も自由

def walk(path: Path, depth=0):
    rows = []
    for p in sorted(path.iterdir()):
        if p.name in IGNORE:
            continue
        # インデントを &nbsp; で表現
        indent = "&nbsp;&nbsp;" * depth
        name = f"{indent}{p.name}"
        type_ = "フォルダ" if p.is_dir() else "ファイル"
        rows.append((name, type_))
        if p.is_dir():
            rows.extend(walk(p, depth + 1))
    return rows

rows = walk(Path("."))

with OUTPUT.open("w", encoding="utf-8") as f:
    f.write("## フォルダ構成\n\n")
    f.write("| パス | 種類 |\n")
    f.write("|------|------|\n")
    for path, type_ in rows:
        f.write(f"| {path} | {type_} |\n")
