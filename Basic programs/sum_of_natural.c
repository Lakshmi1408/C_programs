#include<stdio.h>
int numbers(int num);

int numbers(int num)
{
	int i,sum=0;
	float avg;
	printf("The natural numbers are: ");
	for(i=1;i<=num;i++)
	{
		printf("%d \n",i);
		sum=sum+i;
	}
		avg=sum/num;
		printf("The sum of %d numbers is %d\naverage is %f",num,sum,avg);
}

int main()
{
	int num;
	printf("Enter the input range: ");
	scanf("%d",&num);
	numbers(num);
}
