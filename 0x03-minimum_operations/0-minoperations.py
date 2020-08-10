#!/usr/bin/python3
"""
    calculates the fewest number of operations needed
"""


def min_divider(n):
    """ Method that determines the min divider of n int """
    div = []
    for i in range(1, n+1):
        if n % i == 0:
            div.append(i)
    return div[1]


def minOperations(n):
    """ Method that determines the fewest number of operations """
    
    if type(n) is not int:
        return 0
    res = 0
    while n > 2:
        res += min_divider(n)
        n = int(n / min_divider(n))
    return res
