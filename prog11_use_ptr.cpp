#include<stdio.h>
#include<conio.h>
void input(int *roll,float *p,float *c,float *m);
void cal(float p,float c,float m,float *tot,float *per,char *grade);
void output(int roll,float tot,float per,char grade);
int main()
{
	int roll;
	float phy,che,mat,tot,per;
	char grade;
	input(&roll,&phy,&che,&mat);
	cal(phy,che,mat,&tot,&per,&grade);
	output(roll,tot,per,grade);
//	printf("roll= %d,physic=%f,che=%f,mat=%f",roll,phy,che,mat);
}

void input(int *roll,float *p,float *c,float *m){
	printf("Enter the roll number =");
	scanf("%d",roll);
	printf("Enter the marks of three subjects =");
	scanf("%f%f%f",p,c,m);
}

void cal(float p,float c,float m,float *tot,float *per,char *grade){
	
	*tot=p+c+m;
	*per=(p+c+m)/3;
	
	if(*per>=80){
		*grade='A';
	}
	else 
	if(70<=*per<80){
		*grade='B';
	}
	else
	if(60<=*per<70){
		*grade='C';
	}
	else
	if(40<=*per<60){
		*grade='D';
	}
	else{
		*grade='F';
	}
}

void output(int roll,float tot,float per,char grade){
	
	printf("Roll number =%d\tTotal=%.2f\tPercentage=%.2f\tgrade=%c",roll,tot,per,grade);
}
