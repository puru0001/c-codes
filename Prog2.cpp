/* Question: 1  -
Write a program in c in which we take input as Roll number, Marks of three subject
(Physics,chemistry and math), find the toal, percentage, grade of the student,
condition for grade is :- if per>80 = 'A', if 70<= per >80 = 'B', if 60<= per >70 = 'C',
if 40<= per >60 = 'D', Else 'F'.
and finally print the all things...*/

#include<stdio.h>
#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
//	definning the variable of diffrent data type
	
	int roll;
	float phy,chem,math,total,per;
	char grade,a[20];
	
//	taking marks and rollnumber as a input form user
//	printf("Enter your Name = ");
//	scanf("%s",&a[20]);
	cout<<"Enter your name = ";
	cin>>a;
	printf("Enter the Roll number of the student = ");
	scanf("%d",&roll);
	printf("Enter the number in PHYSICS = ");
	scanf("%f",&phy);
	printf("Enter the number in CHEMISTRY = ");
	scanf("%f",&chem);	
	printf("Enter the number in MATHEMATICS = ");
	scanf("%f",&math);
	
//	now calculating the total obtained numbers
	
	total= phy+chem+math;
	per = (phy+chem+math)/3;
	
//	now cheaking the condition that this student is in which grade
	
	if(phy<40){
		printf("You are fail in Physics\n");
		grade='F';
	}
	else if(chem<40){
		printf("You are fail in Chemistry\n");
		grade='F';
	}
	else if(math<40){
		printf("You are fail in Mathematics\n");
		grade='F';
	}
	else if(per>=80){
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
	cout<<"Name = "<<a<<endl;
	printf("Roll_no = %d\n",roll);
	printf("Physics = %.2f\n",phy);
	printf("Chemistry = %.2f\n",chem);
	printf("Math = %.2f\n",math);
	printf("Total = %.2f\n",total);
	printf("Percentage = %.2f\n",per);
	printf("Grade = %c",grade);
//	printf("%d\t %.2f\t %.2f\t %.2f\t %.2f\t %.2f%\t %c",roll,phy,chem,math,total,per,grade);
	
	/*here %.2f is used in the place of %f, because we want to print only two numbers after decimal
	like- Before:- 23.000000, After:- 23.00*/
	
	return 0;
}
