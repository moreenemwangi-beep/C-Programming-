/*
Name:Moreene Ng'endo
Reg No:CT100/G/26148/25
Description:Program to compute exam eligibility
*/
#include <stdio.h>

int main() {
//variable declaration 
    float balance, amount;

    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    while (balance > 0) {
        printf("\nEnter amount to withdraw: ");
        scanf("%f", &amount);

        balance =balance-amount;

        if (balance > 0)
            printf("Remaining balance: %.2f\n", balance);
        else
            printf("Insufficient balance.\n");
    }

    return 0;
}    