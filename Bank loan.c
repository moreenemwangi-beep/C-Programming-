/*
Name: Moreene Ng'endo
Reg no: CT100/G/26148/25
Date: 25th sept 2025
Description: Units 
*/

#include <stdio.h>
int main(){
	int age;
	float income;
	
	//user prompts
	 
	printf("Please enter your age \n");
	scanf("%d", & age);
	
	printf("Please enter your income \n");
	scanf("%f", &income);
	
	//Eligibility check
	if(age>=21&& income >= 21000){
		printf("Congratulations you qualify for the loan");}
		else{printf("Unfortunately we are unable to offer you a loan at this time. \n" );}
		return 0;
		}