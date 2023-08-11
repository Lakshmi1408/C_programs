#include<stdio.h>
int Armstrong(int num);

int Armstrong(int num)
{
	int rem,res=0;	
	int num1=num;
	while(num!=0)
	{
		rem=num%10;
		res=res+rem*rem*rem;
		num=num/10;
	}
	if(res==num1)
		printf(" armstrong number");
	else
		printf("Not an armstrong number");
}	

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	Armstrong(num);
}
