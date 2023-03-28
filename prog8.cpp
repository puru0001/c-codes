#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter the lim= ");								
	scanf("%d",&n);											
															
	for(int i=n;i>=1;i--)
	{
		printf("\n");
		for(int k=n;k>=i+1;k--)								// 1/ 4 4 4 4
		{													// 2/ 4\3 3 3
			printf("%d ",k);								// 2/ 4 3\2 2
		}													// 2/ 4 3 2\1
		for(int j=i;j>=1;j--)
		{
			printf("%d ",i);
		}
	}														// 4 4 4 4
	for(int i=n;i>=1;i--)									// 3 3 3/4
	{														// 2 2/3 4
		for(int l=i;l>=1;l--)								// 1/2 3 4
		{
			printf("%d ",i);
		}
		
		for(int k=i+1;k<=n;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
	
	return 0;
}
