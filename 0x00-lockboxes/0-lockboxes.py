#!/usr/bin/python3
"""
    Determines if all the boxes can be opened
"""


def canUnlockAll(boxes):
    """ Method that determines if all the boxes can be opened """
    if boxes:
        box = [0]
        for i in box:
            for j in boxes[i]:
                if j not in box and j != i:
                    box.append(j)
        if len(box) == len(boxes):
            return True
        return False
