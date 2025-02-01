#!/usr/bin/python3
def no_c(my_string):
    new_string = ""
    for c in my_string:
        if ord(c) != 67 and ord(c) != 99:
            new_string += c
    return (new_string)
