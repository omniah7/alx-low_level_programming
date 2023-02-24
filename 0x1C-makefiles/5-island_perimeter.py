#!/usr/bin/python3
"""Island Perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""
    perimeter = 0
    rowlength = len(grid)
    colength = len(grid[0])
    for row in range(rowlength):
        for col in range(colength):
            perimeter += vertical((row, col), rowlength, grid)
            perimeter += horizontal((row, col), colength, grid)
    return perimeter


def vertical(pos, max, grid):
    """return the perimeter of the vertical around a cell in grid
    Attributes:
        pos: a tuple of the posotion of the cell
        max: the last indx of the rows in grid
        grid: a list of list of integers
    """
    row, col = pos
    # check the cell value
    if grid[row][col] == 0:
        return 0
    p = 0

    # check the cell above
    if row == 0:
        p += 1
    else:
        if grid[row - 1][col] == 0:
            p += 1

    # check the cell at bottom
    if row == max:
        p += 1
    else:
        if grid[row + 1][col] == 0:
            p += 1

    return p


def horizontal(pos, max, grid):
    """returns the perimeter of the horiozntal around a cell in grid
    Attributes:
        pos: a tuple of the posotion of the cell
        max: the last indx of the columns in grid
        grid: a list of list of integers
    """
    row, col = pos
    # check the cell value
    if grid[row][col] == 0:
        return 0
    p = 0

    # check the left cell
    if col == 0:
        p += 1
    else:
        if grid[row][col - 1] == 0:
            p += 1

    # check the right cell
    if col == max:
        p += 1
    else:
        if grid[row][col + 1] == 0:
            p += 1

    return p
