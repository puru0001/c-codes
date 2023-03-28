#include<iostream>
using namespace std;
int main()
{
	int x,i,a[]={12,8,6,4,2,5,3,9,7,1,10};
	cout<<"enter the no. you want tot find = ";
	cin>>x;
	for(i=0;i<=10;i++)
	{
		if(a[i]==x)
		{
			cout<<"Element found at "<<i<<" index";
			break;
		}
	}
	if(i>=10)
		{
			cout<<"Element not found";
		}
	return 0;
}

