#include<stdio.h>
#include<conio.h>
int main()
{
	int n=5, fact=1;
	
	for(int i=1; i<=n; i++)
	{
		fact= fact*i;
	}
			printf("%d,",fact);
	getch();
	return 0;
}
