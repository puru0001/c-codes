#include<iostream>
using namespace std;
int main()
{
	int i, fact =1,num;
	cout<<"enter any no= ";
	cin>>num;
	for(i=1; i<=num; i++)
	{
		fact= fact * i;
	}
	cout<<"fcatorial of num ="<<fact;
	return 0;
}
