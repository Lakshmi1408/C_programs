#include<stdio.h>
int fact(int num);
int fact(int num)
{
	int i,temp=1;
	printf("The factorial of %d is: ",num);
        for(i=num;i>=1;i--)
        {
                temp=temp*i;
                printf("%d*",i);
        }
        printf("\nThe factorial is %d :",temp);
}

int main()
{	
	int num,i,temp=1;
	printf("Enter the number :");
	scanf("%d",&num);
	fact(num);
}
