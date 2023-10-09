#!/usr/bin/python3
def no_c(my_string):
    copy = [x for in my_string if x != 'c' and x != 'C']
    return ("".join(copy))
