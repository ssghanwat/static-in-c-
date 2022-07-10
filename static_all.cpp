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
			cout<<this->i<<"\n";
			cout<<this->j<<"\n";
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
	//Demo dobj;
	
	return 0;
}