#include<stdio.h>
#include<conio.h>
int fact(int a)
{
	printf("Enter the limit = ");
	scanf("%d",&a);
	if(a>0)
		return 1;
	else 
		return a*fact(a-1);
}

int main()
{
	void fact();
	getch();
	return 0;
}
