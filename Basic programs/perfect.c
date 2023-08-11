#include<stdio.h>
int: perfect(int num);


int perfect(int num)
{
	int i,sum=0;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}

		if(sum==num)
			printf("The number %d is perfect number",sum);
		else
			printf("The number %d is not perfect number",sum);

}
		
	int main()
	{
		int num;
		printf("Enter the element: ");
		scanf("%d",&num);
		perfect(num);
	}
