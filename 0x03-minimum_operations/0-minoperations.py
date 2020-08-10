#!/usr/bin/python3
"""
    calculates the fewest number of operations needed
"""


def minOperations(n):
    """ Method that determines the fewest number of operations """
    minDiv = 0
    while isinstance(n, int) and n > 1:
        div = []
        for i in range(1, n + 1):
            if n % i == 0:
                div.append(i)
        minDiv += div[1]
        n = int(n / div[1])
    return minDiv
