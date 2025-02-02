#!/usr/bin/python3
def roman_to_int(roman_string):
    if type(roman_string) is not str or roman_string is None:
        return (0)

    roman = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    num = 0

    for x in range(len(roman_string)):
        if x > 0 and roman[roman_string[x]] > roman[roman_string[x - 1]]:
            num += roman[roman_string[x]] - 2 * roman[roman_string[x - 1]]
        else:
            num += roman[roman_string[x]]
    return (num)
