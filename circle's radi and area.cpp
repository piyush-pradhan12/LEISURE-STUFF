#include<stdio.h>
#define pie 3.14
int main(){
	printf("Enter the value of your radius:");
	double r;
	scanf("%lf",&r);
	printf("The Value of the Diameter = %lf\n",2*r);
	printf("The value of the Area = %lf",pie*r*r);
	return 0;
	     }
