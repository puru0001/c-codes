#include<iostream>
using namespace std;
int main()
//input the many of numbers and find the largest number
{
	int i,a[20],n,large;
	cout<<"inter the size of array =";
	cin>>n;
	cout<<"inter the elements of array =";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		large=a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
	}
	cout<<"Largest no. is ="<<large;
}
