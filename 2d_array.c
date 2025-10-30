/*
Name:Moreene Ng'endo
Reg No:CT100/G/26148/25
Description:2D Array
*/

	#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10]; // 5 floors, 10 rooms each
    int i, j, occupied, vacant;

    srand(time(0)); // Seed for random numbers

    printf("=== 2D ARRAY: Room Occupancy (One Branch) ===\n");

    // Generate random occupancy data (1 = occupied, 0 = vacant)
    for (i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;

            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", i + 1, occupied, vacant);
    }

    return 0;
}
