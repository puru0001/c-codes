#include<stdio.h>
#include<conio.h>
int main()
{
	float num,sum;
	int i;
	printf("Enter the limit of number you want to sum = ");
	scanf("%f",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d\n",i);
	}
	sum= num*((num+1)/2);
	printf("\nsum of these netural numbers is = %.2f",sum);
	getch();
	return 0;
}
