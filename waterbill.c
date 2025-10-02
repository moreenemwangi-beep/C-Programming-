/*
Name:Moreene Ng'endo
Reg No:CT100/G/26148/25
Description:Program to compute water bill calculator
*/

#include<stdio.h>//pre-processor directive
//main
int main() {
	int units;
	float bill;
	
	//prompt the user
	printf("Enter the number of units consumed:");
	scanf("%d",&units);
	//calculate bill
	if(units<=30){
	 	bill=units*20;
	}
	else if(units <=60) {
	 bill=(30*20)  + (units-30) *25;
	}
	else{
	 bill = (30*20) +(30*25) +(units-60) *30;
	 printf("Total water bill:%.2fKES\n",bill);
	 return 0;
	}
	 	
  	

}	
