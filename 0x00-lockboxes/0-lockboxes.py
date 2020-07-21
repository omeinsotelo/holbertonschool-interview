#!/usr/bin/python3
"""
    Determines if all the boxes can be opened
"""


def canUnlockAll(boxes):
    """ Method that determines if all the boxes can be opened """
    if boxes:
        box = [0]
        """
        box = [0]
        for i in box:
            for j in boxes[i]:
                if j < len(boxes) and j not in box:
        """
        for i in range (len(boxes)):
            for j in boxes[i]:
                if i != j and j not in box:
                    box.append(j)
        if len(box) == len(boxes):
            return True
        return False
