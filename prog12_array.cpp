#include<stdio.h>
#include<conio.h>
int main()
{
//	definning the variable of diffrent data type
	
	int roll[20],n,i;
	float phy[20],chem[20],math[20],total[20],per[20];
	char grade[20];
	
	printf("Enter the number of students = ");
	scanf("%d",&n);
	
for(i=0;i<n;i++)
{
	printf("Enter the Roll number of the student = ");
	scanf("%d",&roll[i]);
	printf("Enter the number in PHYSICS = ");
	scanf("%f",&phy[i]);
	printf("Enter the number in CHEMISTRY = ");
	scanf("%f",&chem[i]);	
	printf("Enter the number in MATH = ");
	scanf("%f",&math[i]);
	
	total[i]= phy[i]+chem[i]+math[i];
	per[i] = (phy[i]+chem[i]+math[i])/3;
		
	if(per[i]>=80){
		grade[i]='A';
	}
	else 
	if(per[i]>=70){
		grade[i]='B';
	}
	else
	if(per[i]>=60){
		grade[i]='C';
	}
	else
	if(per[i]>=40){
		grade[i]='D';
	}
	else{
		grade[i]='F';
	}
}
	
//	now printing the final result in a propr format
	printf("Roll_no Phy \t Chem \t Math \t total \t per \t grade\n");
for(i=0;i<n;i++)
{
	printf("%d\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f%\t %c\n",roll[i],phy[i],chem[i],math[i],total[i],per[i],grade[i]); 
}
	/*here %.2f is used in the place of %f, because we want to print only two number after decimal
	like- Before:- 23.000000, After:- 23.00*/
	
	return 0;
}
