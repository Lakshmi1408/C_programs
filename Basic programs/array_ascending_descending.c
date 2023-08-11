#include<stdio.h>
int main()
{
	int a[20],size,i,j,temp;
	printf("Enter the numbers: ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;

			}
		}
	}
	printf("The assending order is : ");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	printf("The decending order is: ");
	for(i=size-1;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}
