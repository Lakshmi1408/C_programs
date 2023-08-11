#include<stdio.h>
int main()
{
	int i,num,count=0;
	printf("Enter the number :");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
		count++;
	}
		if(count>=1)
			printf("The number %d is not a prime",num);
		else
			printf("The number %d is prime",num);
}
