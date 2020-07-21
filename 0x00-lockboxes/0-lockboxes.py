#!/usr/bin/python3
"""
    Determines if all the boxes can be opened
"""


def canUnlockAll(boxes):
    """ Method that determines if all the boxes can be opened """
    if boxes:
        # box is the varible to store in a list the values in boxes
        box = [0]
        # I go through the list
        for i in box:
            # I nest boxes[i] to bring the values ​​from each list
            for j in boxes[i]:
                # I validate the values ​​that I am going to add to my list
                if j < len(boxes) and j not in box:
                    # I add the values to my list
                    box.append(j)
        # I compare the length of the lists
        if len(box) == len(boxes):
            return True
        return False
