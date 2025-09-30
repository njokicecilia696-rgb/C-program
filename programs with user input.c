//simple c program(hello world)
/*
name:Njoki Cecilia
reg:CT100/G/26207/25
description:program with usesr input
*/

#include <stdio.h>

//main function
int main(int argc, char** argv)
{
	float height;
	printf("enter your height: ");
	scanf("%f", &height);
	printf("your height is %f \n",height);
	
	float bankbalance;
	printf("enter your bankbalance: ");
	scanf("%f", &bankbalance);
	printf("your bankbalance is %f \n", bankbalance);
	
	int phonenumber;
	printf("enter your phone number: ");
	scanf("%d", &phonenumber);
	printf("your phonenumber is %d \n", phonenumber);
	
	return 0;
}
	