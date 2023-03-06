#!/usr/bin/python3

"""
5-island_perimeter
"""

def island_perimeter(grid):
    """
    Return the perimeter of the island by:
    -append the positions of island cells in list(pos) and return the perimeter
    """
    pos = []
    row_length = len(grid)
    column_length = len(grid[0])
    island_cells = 0

    for i in range(1, column_length):
        for j in range(1, row_length):
            #check if current position is land and if it is has land around it
            if (grid[j][i] == 1) and ((grid[j + 1][i] == 1) or (grid[j - 1][i] == 1)):
                #append the position to list(pos) if it meets the requirements
                pos.append([j, i])

    for i in range(1, row_length):
        for j in range(1, column_length):
            #check if current position is land and if it is has land next to it
            if (grid[i][j] == 1) and (grid[i][j + 1]):
                if len(pos) == 0:
                    pos.append([i, j])
                    pos.append([i, j+1])
                #checks to see if the position is in list(pos)
                elif [str(i) for i in pos].count(str([i, j])) == 1:
                    pos.append([i, j+1])

    island_cells = len(pos)
    return (2 *(island_cells) + 2)
