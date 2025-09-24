/*
Name:Njoki Cecilia
REG:CT100/G/26207
Description:Program to compute compound interest
A=p( 1+ r/n )^n+t
*/

#include <stdio.h>

int main(){
	float  principle, rate, time, n, A, 
	printf("enter principle: ");
	scanf("%f", &principle);
	
	printf("enter rate: ");
	scanf("%f", &rate);
	
	printf("enter time: ");
	scanf("%f", &time);
	
	printf("enter A: ");
	scanf("%f", &A);
	
	A= principle (1+rate/n)^n+time;
	
	printf("A is %f ",A);
	
	return 0;
}
