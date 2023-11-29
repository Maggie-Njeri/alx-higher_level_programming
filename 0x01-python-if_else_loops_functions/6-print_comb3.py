#!/usr/bin/python3
for x in range(9):
    for z in range(x + 1, 10):
        if x*10 + z < 89:
            print("{:d}{:d}".format(x, z), end=", ")
print(89)
