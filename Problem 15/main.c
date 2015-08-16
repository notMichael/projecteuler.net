/*
Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?
*/

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define GRIDSIZE 20

int main()
{
    int64_t paths = 1;
    int i;
    //Binomical coefficient
    for(i = 0; i<GRIDSIZE;i++)
        {
            paths *= (2*GRIDSIZE) -i;
            paths /= i + 1;
        }
    printf("result: %"PRId64,paths);
    return 0;
}
