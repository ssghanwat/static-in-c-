#include<iostream>
using namespace std;

class Demo
{
	public:
		int i,j;                //instance variable   (non static )
		static int x;           //class variable       (static)
		
		Demo(int a=10,int b=20)
		{
			cout<<"\nInside constructor";
			
			this->i=a;
			this->j=b;
		}
		
		//void fun(Demo *this,int no)
		void fun(int no)
		{
			cout<<"\nInside non static fun";
			cout<<"\n"<<this->i;
			cout<<"\n"<<this->j;
			cout<<"\n"<<Demo::x;
		}
		
		//static void gun(int value)
		static void gun(int value)
		{
			cout<<"\nInside static gun";
			//cout<<this->i<<"\n";           error
		}
};

int Demo::x=30;

int main()
{
	cout<<"\n"<<Demo::x;
	Demo::gun(11);
	
	Demo dobj(11);
	dobj.fun(21);                     //fun(&obj,21);
	
	cout<<"\n"<<sizeof(dobj);
	
	cout<<"\n"<<dobj.i;
	cout<<"\n"<<dobj.j;
	
	dobj.gun(31);                    //Demo::gun(11)
	
	return 0;
}