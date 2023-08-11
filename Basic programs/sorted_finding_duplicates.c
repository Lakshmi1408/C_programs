#include<stdio.h>
int main()
{
int a[20];
int size,lastduplicate=0;
printf("enter size: ");
scanf("%d",&size);

	for(int i=0;i<size;i++)
	{
		printf("Enter the element %d: ",i+1);
		scanf("%d",&a[i]);
	}
	for(int j=0;j<size;j++)
	{	
		if(a[j]==a[j+1] && a[j]!=lastduplicate)
		{
			printf("%d\n",a[j]);
			lastduplicate=a[j];
		}

	}
}
