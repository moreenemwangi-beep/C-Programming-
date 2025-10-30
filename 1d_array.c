/*
Name;Moreene Ng'endo
Reg No :CT100/G/26148/25
Description:1D array
*/

#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0, average;
    int i;

    printf("=== 1D ARRAY: Weekly Revenue Tracker ===\n");

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    // Calculate average
    average = total / 7.0;

    // Display results
    printf("\nTotal weekly revenue: %.2f\n", total);
    printf("Average daily revenue: %.2f\n", average);

    return 0;
}
