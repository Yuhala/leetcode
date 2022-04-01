#!/usr/bin/python
"""
Author: Peterson Yuhala
Company: IIUN
Date: Feb 2021

"""

def my_count(string):
    res = []
    if not string:
        return res
    index = 0    
    cur = string[0]
    num = 0
    while (index < len(string)):
        if(string[index] == cur):
            num += 1
        else:
            res.append((cur,num))
            cur = string[index]
            num = 1
        index += 1
    res.append((cur,num))
    return res


print(my_count("aaabbccddee"))
