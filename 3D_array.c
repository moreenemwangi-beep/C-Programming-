/*
Name:Moreene Ng'endo
Reg No:CT100/G/26148/25
Description:3D array
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms
    int i, j, k, totalOccupied = 0, branchOccupied;

    srand(time(0)); // Initialize random number generator

    printf("=== 3D ARRAY: Multiple Branches ===\n");

    for (i = 0; i < 3; i++) {
        branchOccupied = 0;

for (j = 0; j < 5; j++) {
   for (k = 0; k < 10; k++) {
  chain[i][j][k] = rand() % 2;

   if (chain[i][j][k] == 1)
                    branchOccupied++;
            }
        }

        printf("Branch %d -> Occupied rooms: %d\n", i + 1, branchOccupied);
        totalOccupied += branchOccupied;
    }

    printf("\nTotal occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}