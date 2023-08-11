#include<stdio.h>
int main()
{
	int a[20];//3,6,8,8,10,12,15,15,15,20
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
                if(a[j]==a[j+1] && a[j]!=lastduplicate)//8==8 (a[2]==a[3])
                {
                	for(int k=j+2;k<size;k++)//k=2+2
						//k=4

			{
				if(a[j]!=a[k])//a[2]!=a[4]
					      //8!=10
				{
					 printf("the number  %d repeats %d times\n",a[j],k-j);
						break;
				}
               		 }


       		 }

		lastduplicate=a[j];
	}
}
