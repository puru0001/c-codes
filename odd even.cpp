#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	
	printf("Enter the number you want to cheak = ");
	scanf("%d",&num);
	
	if(num%2==0)
	printf("%d is an even number",num);
	else 
	printf("%d is a odd number",num);
	getch();
	return 0;
}
