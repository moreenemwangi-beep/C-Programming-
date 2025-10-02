/*
Name:Moreene Ng'endo
Reg No:CT100/G/26148/25
Description:Program to compute exam eligibility
*/

#include<stdio.h>
int main(){
	
	float  attendance,average_marks;
	//prompt user for input
	printf("Enter attendance percentage:");
	scanf("%f",&attendance);
	
	printf("Enter average marks:");
	scanf("%f",&average_marks);
	
	//check exam eligibility
	if(attendance>=75&&average_marks>=40){             printf ("Eligible for final exams \n");
	}else{                                                                  printf("Not eligible for the final exams");
	}
	return 0;
}

