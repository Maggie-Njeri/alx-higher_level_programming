#!/usr/bin/python3
import sys


def safe_function(fct, *args):
    try:
        m = fct(*args)
        return m
    except Exception as err:
        print("Exception: {}".format(err), file=sys.stderr)
        return None
