#include<iostream>
using namespace std;
void ls(int*, int,int);

int main()
{
	
	int x,i,a[20],n,p;
	cout<<"Enter the size of array = ";
	cin>>n;
	cout<<"Enter the elements = ";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	cout<<"enter the no. you want to find = ";
	cin>>x;
	if(p==-1)
		cout<<"Element not found in the array ";
	else
		cout<<"Element foud at"<<p+1;
	return 0;
}

void ls(int *p, int n,int find)
{
	int i; 
		
	for(i=0;i<=n;i++)
	{
		if(*(p+i)== find)
			return i;
	}
	return 1;
}
