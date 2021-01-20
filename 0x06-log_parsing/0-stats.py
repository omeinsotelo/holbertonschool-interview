#!/usr/bin/python3
"""
parsing function
"""
import sys


counters = {
    "size": 0,
    "lines": 1
}

cntCode = {
    "200": 0, "301": 0, "400": 0, "401": 0,
    "403": 0, "404": 0, "405": 0, "500": 0
}


def printCodes():
    """
    function to print the codes and the number of ocurrence
    """
    # print file size
    print("File size: {}".format(counters["size"]))
    # print all codes
    for key in sorted(cntCode.keys()):
        # if a val is not 0
        if cntCode[key] != 0:
            print("{}: {}".format(key, cntCode[key]))


def countCodeSize(listData):
    """
    count the codes and file size
    """
    # count file size
    counters["size"] += int(listData[-1])
    # if exists the code
    if listData[-2] in cntCode:
        # count status code
        cntCode[listData[-2]] += 1
        # line 10 print


if __name__ == "__main__":
    try:
        for line in sys.stdin:
            try:
                countCodeSize(line.split(" "))
            except:
                pass
            if counters["lines"] % 10 == 0:
                printCodes()
            counters["lines"] += 1
    except KeyboardInterrupt:
        printCodes()
        raise
    printCodes()
