#include<iostream>
using namespace std;

int main()
{
	int i,l=0,n,data,r=n-1,a[10],mid;
	
	cout<<"inter the size of array =";
	cin>>n;
	cout<<"Enter the elements of array =";
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cout<<"finding element =";
	cin>>data;
	while(l<r)
	{
		mid= (l+r)/2;
		
		if(data == a[mid])
			cout<<"found at "<<i<<"th position";
		else 
		if(data < a[mid])
			r=mid-1;
		else 
			l=mid+1;
	}
	return -1;
}
