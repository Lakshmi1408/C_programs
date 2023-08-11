#include<stdio.h>

int main()
{
        int a[30],size,i;
	int j=0;
	int k=0;
	int b[20],c[20];
        printf("Enter the size: ");
        scanf("%d",&size);
        for(int i=0;i<size;i++)
       	{
               	printf("Enter the num %d:  ",i+1);
               	scanf("%d",&a[i]);
       	}
	for(int i=0;i<size;i++)	
	{
		if(a[i]%2==0)
		{	
			b[j]=a[i];
			j++;
		}
		
		else
		{
			c[k]=a[i];
			k++;	
		}
	
	}
		printf("the even numbers are: ");
		for(int i=0;i<j;i++)
		{
			printf("%d\n",b[i]);

		}

		printf("the odd numbers are: ");
		for(int i=0;i<k;i++)
		{
			printf("%d\n",c[i]);

		}
}
