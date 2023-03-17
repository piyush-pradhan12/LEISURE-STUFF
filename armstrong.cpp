#include<stdio.h>
int main(){
	int x,i;
	printf("table of:");
	scanf("%d",&x);
	i=x;
	for(x=1;x<=10;x++)
	{
		printf("%d\n",i*x);
	}
	return 0;
}
