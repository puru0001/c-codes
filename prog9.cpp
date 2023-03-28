#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the limit= ");
	scanf("%d",&n);
	for(int j=n;j>=1;j--)
	{
		for(int l=j;l>=1;l--)								// 1/2 3 4
		{
			printf("%d ",j);
		}
		for(int i=j+1;i<=n;i++)
		{
			printf("%d ",i);
		}
	printf("\n");
	}
	return 0;
}

/*
for(int i=n;i>=1;i--)
	{
		for(int k=n;k>=i+1;k--)								// 1/ 4 4 4 4
		{													// 2/ 4\3 3 3
			printf("%d ",k);								// 2/ 4 3\2 2
		}	*/												// 2/ 4 3 2\1	
