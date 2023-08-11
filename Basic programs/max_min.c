#include<stdio.h>

int main()
{
	int max,min,a[30],size;
	printf("Enter the size: ");
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		printf("Enter the num %d:  ",i+1);
		scanf("%d",&a[i]);
	}
	max=min=a[0];

	for(int i=1;i<size;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	printf("%d is maximum and %d is minimum",max,min);
}
