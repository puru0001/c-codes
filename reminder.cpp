#include<iostream>
using namespace std;
int main()
{
	int i,n,ans=1,p,r;
	cout<<"Enter the base number = ";
	cin>>n;
	cout<<"Enter the power number = ";
	cin>>p;
	for(i=0;i<p;i++)
	{
		ans=ans*n;
	}
	cout<<"The value is "<<ans;
	r=ans%10;
	cout<<"\nLast digit is "<<r;
	return 0;
}
