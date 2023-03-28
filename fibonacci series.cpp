#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,sum,lim;
	
	printf("Enter the limit of series = ");
	scanf("%d",&lim);
	printf("%d %d ",a,b);
	for(int i=1;i<=lim-2;i++)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d ",sum);
	}
	getch();
}
