#include <stdio.h>

void display(int a[]);

int main()
{   int i;
	int a[5] = {10, 20 , 30, 40, 50};
	
	display(a);
	
	return 0;
}

void display(int *a)
{
	int i;
	for(i=0; i<5; i++)
		printf("%d ", *(a+i));
}
