#!/usr/bin/python3
def to_upper(r):
    if ord(r) >= 97 and ord(r) <= 122:
        return (ord(r) - 32)
    else:
        return ord(r)
    :w
    def uppercase(str):
        string_new = ""
        for r in s:
            string_new += "%c" % to_uper(r)
            print("{:s}".format(string_new))

