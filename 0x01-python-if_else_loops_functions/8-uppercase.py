#!/usr/bin/python3
def uppercase(str):
    uppercase_str = ''
    for char in str:
        if 'a' <= char <= 'z':
            uppercase_str += chr(ord(char) - 32)
        else:
            uppercase_str += char
    print("{}\n".format(uppercase_str), end="")
