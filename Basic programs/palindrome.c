#include<stdio.h>
int palindrome(int num);

int palindrome(int num)
{
	int rem=0,res;	
	int num1=num;
	while(num)
	{
		res=num%10;
		rem=rem*10+res;
		num=num/10;
	}
	if(num1==rem)
		printf("%d is palindrome number",rem);
	else
		printf("%d is not a palindrome number",rem);
}	

int main()
{
	int num;
	printf("Enter the number: ");
	scanf("%d",&num);
	palindrome(num);
}
