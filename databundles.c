/*
Name:Moreene Ng'endo
Reg No:CT100/G/26148/25
Description:computing program  for data bundles
*/

#include <stdio.h>

int main(void) {
    int choice;

    // Display menu
    printf("Select data bundle:\n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB   @ 350 KES\n");
    printf("4. 2GB   @ 600 KES\n");

    // Ask for user input
    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    // Switch to display bundle and cost
    switch(choice) {
        case 1:
            printf("You selected 100MB. Cost = 50 KES\n");
            break;
        case 2:
            printf("You selected 500MB. Cost = 200 KES\n");
            break;
        case 3:
            printf("You selected 1GB. Cost = 350 KES\n");
            break;
        case 4:
            printf("You selected 2GB. Cost = 600 KES\n");
            break;
    }

    return 0;
}