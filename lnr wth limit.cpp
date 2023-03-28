#include<iostream>
using namespace std;
int main()
{
	int x,i,a[20],n;
	cout<<"Enter the size of array = ";
	cin>>n;
	cout<<"Enter the elements = ";
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	cout<<"enter the no. you want tot find = ";
	cin>>x;
	for(i=0;i<=10;i++)
	{
		if(a[i]==x)
		{
			cout<<"Element found at "<<i<<"th index";
			break;
		}
	}
	if(i>=10)
		{
			cout<<"Element not found";
		}
	return 0;
}

