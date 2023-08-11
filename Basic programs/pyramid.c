#include<stdio.h>
int main()
{
	int i,j,space,num;
	printf("enter number: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(space=1;space<=num-i;space++)
		{
			printf(" ");
		}
			for(j=1;j<=2*i-1;j++)
			{
				printf("*");
			}
			printf("\n");
	}
}

