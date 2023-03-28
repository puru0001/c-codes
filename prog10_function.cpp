#include<stdio.h>
#include<conio.h>

int cal(int c,int d){
	int sum;
	sum=c+d;
	return sum;
}
int main()
{
	int a,b;
	printf("Enter two number =");
	scanf("%d%d",&a,&b);
	cal(a,b);
	printf("%d",b);
}
