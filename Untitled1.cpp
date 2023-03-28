#include<iostream>
using namespace std;
int main()
{
	int N;
	cout<<"enter any number=";
	cin>>N;
	
	if((N%3)==0 && (N%5)==0)
	cout<<"ForkCPP";
	else
	if((N%3)==0)
	cout<<"Fork ";
	else
	if((N%5)==0)
	cout<<"CPP ";
	
	if((N%3)!=0 && (N%5)!=0)
	cout<<"nothing";
	return 0;
}
