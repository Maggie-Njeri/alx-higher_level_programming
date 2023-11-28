#!/usr/bin/python3
def uppercase(str):
    for r in str:
        if ord("a") <= ord(r) <= ord("z"):
            return chr(ord(r) - 32)
        else:
            return ord(r)
        print("{:s}".format(str), end=""):
            print()
