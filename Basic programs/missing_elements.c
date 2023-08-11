#include<stdio.h>
int main()
{
	int i,j,a[11],size;
	printf("enter the size of array: ");
	scanf("%d",&size);
	printf("enter the elements: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	int k;
	for(i=0;i<size-1;i++)
	{
		if((a[i+1]-a[i])==2)
			{
				printf("the missing element is %d\n",a[i+1]-1);
			}
			
			if ((a[i+1]-a[i])>=3)
			{
				k=a[i+1]-a[i];
				for(j=1;j<k;j++)
				{
					int t=a[i+1]-j;
					printf("the missing element is %d\n",t);
				}
			}
	}
}
