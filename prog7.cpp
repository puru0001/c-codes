#include<stdio.h>
#include<conio.h>
int main()
{
	for(int i=1; i<=10; i++)
	{
		for(int k=i;k<=10;k++)          
		{
			printf(" ");
		}
		for(int j=1;j<=i;j++)	
		{
		printf("* ");
		}
		printf("\n");
	}

	for(int p=10; p>=1; p--)
	{
		for(int q=10;q>=p;q--)          
		{
			printf(" ");
		}
		for(int r=p;r>=1;r--)	
		{
		printf("* ");
		}
		printf("\n");
	}
	return 0;
}
