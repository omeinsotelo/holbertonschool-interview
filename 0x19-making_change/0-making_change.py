#!/usr/bin/python3
"""
making_change project
"""


def makeChange(coins, total):
    """
    makeChange function
    """
    if total <= 0:
        return 0

    coins.sort(reverse=True)
    suma = 0
    noCoins = 0
    cnt = 0

    while cnt < len(coins) and suma != total:

        if suma + coins[cnt] > total:
            cnt += 1
        else:
            suma += coins[cnt]
            noCoins += 1

    if suma == total:
        return noCoins
    return -1
