#include<iostream>
using namespace std;
void test(int data) throw(int,char,double)
{
	try
	{
		if(data==0)
		{
			throw 10;
		}
		else if(data==1)
		{
			throw 4.5;
		}
		else if(data==-1)
		{
			throw 'a';
		}
	}
	catch(int i)
	{
		cout<<"exception due to integer"<<endl;
	}
	catch(double i)
	{
		cout<<"exception caught due to double"<<endl;
	}
	catch(char c)
	{
		cout<<"exception caught due to charecter"<<endl;
	}
}
int main()
{
	test(0);
	test(-1);
	test(1);
	return 0;
}
