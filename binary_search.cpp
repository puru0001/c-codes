#include<iostream>
using namespace std;
int main()
{
	int i,n,a[10],item,first,last,mid,array;
	cout<<"Enter the size of array =";
	cin>>n;
	cout<<"Enter the elements of array =";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the item to be searched =";
	cin>>item;
	first=1;
	last=n;
	mid=(first+last)/2;
	while((first<last) && (a[mid] != item))
	{
		if(a[mid]<item)
		{
			first=mid+1;
			last=n;
		}
		else
		{
		first=1;
		last=mid-1;
		}
		mid=(first + last)/2;
	}
	if (a[mid]==item)
	cout<<"item found at "<<mid;
	
	else
	{
	cout<<"item not be found";
	}
	return 0;
}
