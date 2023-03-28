#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	do{
		scanf("%d",&i);
		printf("\nInvalid number!!\n");
	}
	while(i>0);
	printf("%d is -ve",i);
}
