#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter x value: ");
	scanf("%d",&x);
	printf("Enter y value: ");
	scanf("%d",&y);
	int temp=x;
	x=y;
	y=temp;
	printf("The value of x: %d and value ofy: %d is",x,y);
}
