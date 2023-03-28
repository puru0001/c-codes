#include<iostream>
using namespace std;
class table
{
	int tno, i;
	public:
	void input()
	{
		cout<<"Enter a tno = ";
		cin>>tno;
	}
	void dis()
	{
		for(i=0; i<=10; i++)
		{
			cout<<tno<<"*"<<i<<"="<<tno*i;
			cout<<"\n";
		}
	}
};
int main()
{
	table t;
	t.input();
	t.dis();
	return 0;
}
