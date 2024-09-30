#!/usr/bin/python3

def safe_print_list(my_list=[], x=0):
    index = 0
    num = 0

    while index < x:
        try:
            print(my_list[index], end='')
            num += 1
        except IndexError:
            break

        index += 1

    print()

    return num
