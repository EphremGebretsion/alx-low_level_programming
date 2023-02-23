#!/usr/bin/python3
""" This module will create a parameter calculator """


def island_perimeter(grid):
    """ calculate the perimeter of a grid island """

    r, perimeter = 0, 0
    row_len = len(grid[0])
    for row in grid:
        c = 0
        for column in row:
            if column == 1:
                perimeter += 4
                if r != 0:
                    if grid[r - 1][c] == 1:
                        perimeter -= 1
                if r != len(grid) - 1:
                    if grid[r + 1][c] == 1:
                        perimeter -= 1
                if c != 0:
                    if row[c - 1] == 1:
                        perimeter -= 1
                if c != row_len - 1:
                    if row[c + 1] == 1:
                        perimeter -= 1
            c += 1
        r += 1
    return perimeter
