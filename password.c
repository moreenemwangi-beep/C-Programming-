/*
Name:Moreene Ng'endo
Reg No:CT100/G/26148/25
Description:Program to compute exam eligibility
*/
#include <stdio.h>

int main() {
    char password[20];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0);

    printf("Access Granted!\n");

    return 0;
}   