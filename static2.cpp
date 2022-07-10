#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;
		static int x;
		
		Demo()
		{
			cout<<"\nInside Demo Constructor";
			i=10;
			j=11;
		}
		~Demo()
		{
			cout<<"\nInside Demo Destructor";
		}
};

int Demo::x=30;

int main()
{
	Demo dobj;
	cout<<"\n"<<sizeof(dobj);
	cout<<"\n"<<dobj.i;
	cout<<"\n"<<dobj.j;
	cout<<"\nValue of static characteristics is:"<<Demo::x;
	
	return 0;
}