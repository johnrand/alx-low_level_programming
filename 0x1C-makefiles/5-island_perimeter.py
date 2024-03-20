#!/usr/bin/python3

"""
Module that returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """
    Return the perimiter of an island.

    0 rep water zone.
    1 rep land zone.

    Args:
        grid: A list of list of integers.
    Returns:
        The perimeter of island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for high in range(height):
        for wid in range(width):
            if grid[high][wid] == 1:
                size += 1
                if (wid > 0 and grid[high][wid - 1] == 1):
                    edges += 1
                if (high > 0 and grid[high - 1][wid] == 1):
                    edges += 1

    return size * 4 - edges * 2
