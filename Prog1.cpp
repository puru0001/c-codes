/* Question: 1-
Write a program in c in which we take input as Roll number, Marks of three subject
(Physics,chemistry and math), find the toal, percentage, grade of the student,
condition for grade is :- if per>80 = 'A', if 70<= per >80 = 'B', if 60<= per >70 = 'C',
if 40<= per >60 = 'D', Else 'F'.
and finally print the all things...*/

#include<stdio.h>
#include<conio.h>
int main()
{
//	definning the variable of diffrent data type
	
	int roll;
	float phy,chem,math,total,per;
	char grade;
	
//	taking marks and rollnumber as a input form user
	
	printf("Enter the Roll number of the student = ");
	scanf("%d",&roll);
	printf("Enter the number in PHYSICS = ");
	scanf("%f",&phy);
	printf("Enter the number in CHEMISTRY = ");
	scanf("%f",&chem);	
	printf("Enter the number in MATH = ");
	scanf("%f",&math);
	
//	now calculating the total obtained numbers
	
	total= phy+chem+math;
	per = (phy+chem+math)/3;
	
//	now cheaking the condition that this student is in which grade
	
	if(per>=80){
		grade='A';
	}
	else 
	if(70<=per<80){
		grade='B';
	}
	else
	if(60<=per<70){
		grade='C';
	}
	else
	if(40<=per<60){
		grade='D';
	}
	else{
		grade='F';
	}
	
//	now printing the final result in a propr format
	printf("Roll_no Phy \t Chem \t Math \t total \t per \t grade\n");
	printf("%d\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f%\t %c",roll,phy,chem,math,total,per,grade); 
	
	/*here %.2f is used in the place of %f, because we want to print only two number after decimal
	like- Before:- 23.000000, After:- 23.00*/
	
	return 0;
}
