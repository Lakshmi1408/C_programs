#include<stdio.h>
struct student
{
	int rollno;
	char name[14];
	float percentage;
};
int main()
{
       int i;
       	struct student s[3];
	for(i=0;i<3;i++)
	{
		scanf("%d %s %f",&s[i].rollno,s[i].name,&s[i].percentage);
	}
	for(i=0;i<3;i++)
	{
	printf(" Rollnumber : %d\n",s[i].rollno);
	printf("Name :%s\n",s[i].name);
	printf("percentage;%f\n",s[i].percentage);
	}
}

