#!/usr/bin/python3
"""Module to find the perimeter of an 'island' in a grid"""


def island_perimeter(grid):
    """Finds the perimeter of an island in a grid

    Args:
        grid (list of lists): a grid of 1s and 0s, where
        1 represents a side to the island

    Return:
        sum (int): Sum of all the sides of the island
    """
    per = 0

    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y]:
                per += 4
                per -= findNeighbor(grid, x, y)
    return per

def findNeighbor(grid, x, y):
    """Finds the number of neighbors relating to a space on a grid

    Args:
        grid (list of lists): grid to find neighbors in
        x (int): x position on the grid
        y (int): y position on the grid

    Return:
        (int) Number of neighboring cells
    """
    count = 0

    if x > 0 and grid[x-1][y] == 1:
        count += 2
    if y > 0 and grid[x][y-1] == 1:
        count += 2
    return count
