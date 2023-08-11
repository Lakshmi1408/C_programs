#include<stdio.h>
int main()
{
	int a[5],sum=0;
	for(int i=0;i<5;i++)
	{
		printf("enter %d element: ",i+1);
		scanf("%d",&a[i]);
	}
	for(int i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	float avg;
	avg=sum/5;
	printf("sum is %d and average is %f",sum,avg);
}
