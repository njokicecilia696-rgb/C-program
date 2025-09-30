/*
Name:Njoki Cecilia
Reg:CT100/G/26207/25
Description:volume and surface area
V=pie *r^2 *h
S.A=2 *pie *r^2 +2 *r *h
*/

#include <stdio.h>

//main function
int main(){
	
	float radius, height, volume, surfacearea, pie;
	printf("enter pie: ");
	scanf("%f", &pie);
	
	printf("enter radius: ");
	scanf("%f", &radius);
	
	printf("enter your height: ");
	scanf("%f", &height);
	
	volume=pie *(radius*radius) *height;
	surfacearea=2 *pie *(radius*radius) +2 *radius *height;
	
	printf("v is %f \n",volume);
	printf("s.a is %f \n",surfacearea);
	return 0;
}