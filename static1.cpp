#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
		static int x;
		
	Demo()
	{
		cout<<"\nInside default constructor";
		i=10;                                               //non static variable  instance variable
		j=20;
	}
};

int Demo::x=30;                                             //static variable    class variable

int main()
{
	cout<<"\n"<<Demo::x;
	Demo dobj1;
	Demo dobj2;
	cout<<"\n"<<sizeof(dobj1);
	cout<<"\n"<<sizeof(dobj2);
	cout<<"\n"<<dobj1.i;
	cout<<"\n"<<dobj2.i;
	
	return 0;
}