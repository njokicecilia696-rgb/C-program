/*
name:Njoki Cecilia
reg:CT100/G/26207/25
description:bank loan program
*/

#include <stdio.h>

//main function
int main(){
	//variable declaration
	int age ,income ;
	printf("enter yout age: ");
	scanf("%d", &age);
	
    printf("enter your income: ");
    scanf("%d", &income);
    
    if(age>=21, income>=21000){
    	printf("you qualify for a loan.");
	}
	
	
	else{
		printf("we are unable to offer you a loan this time." );
	}
	return 0;
}