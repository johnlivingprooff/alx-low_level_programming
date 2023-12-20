#!/usr/bin/python3
"""Island Perimiter"""


def island_perimeter(grid):
    """The Island perimeter"""
    if not grid or not grid[0]:
        return 0

    rows = len(grid)
    cols = len(grid[0])
    peri = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                peri += 4

                if i > 0 and grid[i - 1][j] == 1:
                    peri -= 1
                if i < rows - 1 and grid[i + 1][j] == 1:
                    peri -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    peri -= 1
                if j < cols - 1 and grid[i][j + 1] == 1:
                    peri -= 1
    return peri
