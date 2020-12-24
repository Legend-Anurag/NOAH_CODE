hand=open("inbox.txt")
for line in hand:
    line=line.rstrip()
    if not line.startswith("From: "):
        continue
    print(line)