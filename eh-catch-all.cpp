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
	catch(...) //the ... is used to catch exceptions of all datatypes
	{
		cout<<"exception caught"<<endl;
	}
}
