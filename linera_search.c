#include<stdio.h>
#include<conio.h>
int main()
{
	int x,i,a[10];
	printf("enter ten numbers = ");
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	printf("enter the no. you want to find = ");
	scanf("%d",&x);
	
	for(i=0;i<10;i++)
	{
		if(a[i]==x)
		{
			break;
			printf("Element found at %d th index",i);
		}
	}
	if(i>10)
		{
			printf("Element not found");
		}
	return 0;
}

