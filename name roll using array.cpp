#include<stdio.h>
#include<conio.h>
int main()
{
	char name[30];
	int r,i;
	for(i=0;i<=3;i++)
	{
	printf("Enter the name =");
	scanf("%s",&name[i]);
	printf("Enter the roll no. =");
	scanf("%d",&r[i]);
	}
	for(i=0;i<=3;i++)
	{
	printf("Your name is = %s\n",name[i]);
	printf("And your roll no. is = %d",r[i]);
	}
	return 0;
}
