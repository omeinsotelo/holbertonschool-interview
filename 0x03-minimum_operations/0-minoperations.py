#!/usr/bin/python3
"""
    calculates the fewest number of operations needed
"""


def minOperations(n):
    """ Method that determines the fewest number of operations """
    res = 0
    while isinstance(n, int) and n > 1:
        for div in range(2, n + 1):
            if not n % div:
                break
        res += div
        n = int(n / div)
    return res
