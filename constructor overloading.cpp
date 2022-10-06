//constructor overloading using parameterized constructors and default constructor
#include<iostream>
using namespace std;
class A
{
	private:
		int num_id;
		char ch_id;
		int flag,flag_default;
		double default_id;
	public:
	A(int x)
	{
		num_id=x;
		flag=1;
	}
	A(char x)
	{
		ch_id=x;
		flag=0;
	}
	A()
	{
		default_id;
		flag_default=1;
	}
	void print()
	{
		if(flag_default)
		{
			cout<<"IMPLICITLY ASSIGNED DEFAULT ID is "<<default_id<<endl;
		}
		else if(flag)
		{
			cout<<"ASSIGNED NUMERIC ID is: "<<num_id<<endl;
		}
		else
		{
			cout<<"ASSIGNED CHARECTER ID is: "<<ch_id<<endl;
		}
		
	}
};
int main()
{
	A o1(2);
	o1.print();
	A o2;
	o2.print();
	A o3('X');
	o3.print();
	return 0;
}
