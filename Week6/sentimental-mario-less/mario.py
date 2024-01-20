from cs50 import get_int

s = 0
while (s < 1 or s > 8):
    s = get_int("Height: ")

blankspaces = s
hashes = 0
for i in range(s):
    blankspaces -= 1
    hashes += 1
    print(" " * blankspaces, end="")
    print("#" * hashes, end="")
    print("")
