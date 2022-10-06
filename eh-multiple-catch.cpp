#include<iostream>
using namespace std;
void test(int);
int main()
{
	test(0);
	test(1);
	test(-1);
	return 0;
}
void test(int x)
{
	try
	{
		if(x==0)
		{
			throw 90;
		}
		else if(x==1)
		{
			throw 90.9;
		}
		else if(x==-1)
		{
			char c;
			throw c;
		}
	}
	catch(double i)
	{
		cout<<"exception caught due to double"<<endl;
	}
	catch(int i)
	{
		cout<<"exception caught due to integer"<<endl;
	}
	catch(char q)
	{
		cout<<"exception caught due to charecter"<<endl;
	}
}
