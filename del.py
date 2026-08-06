from pathlib import Path

current_folder = Path.cwd()

for exe_file in current_folder.rglob("*.exe"):
    exe_file.unlink()
    print(f"Deleted: {exe_file}")

print("Done!")