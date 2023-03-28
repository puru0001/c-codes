#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,n;
	printf("Enter the limit = ");
	scanf("%d",&n);
	for(i=1; i<=n; i=i+2)
	{
		for(k=i; k<=n; k++)
		{
			printf(" ");
		}
		for(j=1; j<=i*2; j=j+2)
		{
			printf("* ");
		}
		printf("\n");
	}
	
	
	return 0;
}
