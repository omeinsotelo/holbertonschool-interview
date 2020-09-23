#!/usr/bin/python3
"""
validate UTF8
"""


def validUTF8(data):
    """validUTF8
    Determines if a given data set represents a valid UTF-8 encoding.
    """
    _char = 0
    for value in data:
        byte = value & 255
        if _char:
            if byte >> 6 != 2:
                return False
            _char -= 1
            continue
        while (1 << abs(7 - _char)) & byte:
            _char += 1
        if _char == 1 or _char > 4:
            return False
        _char = max(_char - 1, 0)
    return _char == 0