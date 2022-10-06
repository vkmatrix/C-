#include<iostream>
using namespace std;
void test(int x)
{
	try
	{
		try
		{
			if(x>0)
			{
				throw 40;
			}
		}
		catch(int val)
		{
			cout<<"handle the exception partially"<<endl;
			throw;
		}
	}
	catch(int val)
	{
		cout<<"handle the exception fully"<<endl;
	}
}
int main()
{
	test(0);
	test(8);
	return 0;
}
