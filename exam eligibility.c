/*
name:Njoki Cecilia
reg:CT100/G/26207/25
description:exam eligibility
*/

#include <stdio.h>

//main function
int main(){
	//variable declaration
	int attendance, averagemarks;
	
	printf("enter your attendance: ");
	scanf("%d", &attendance);
	
	printf("enter averagemarks: ");
	scanf("%d", &averagemarks);
	
	if(attendance>=75, averagemarks>=40){
		printf(" eligible.");
	}
	else{
		printf("not eligible.");
	}
	return 0;
}
	
	