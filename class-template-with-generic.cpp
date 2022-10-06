//class template with only generic datatype
//code that takes two int,float&char values and displays it
#include<iostream>
using namespace std;
template<class A>
class c
{
	private:
		A x,y;
	public:
		void func(A x,A y)
		{
			cout<<"VALUES ARE:"<<endl;
			cout<<x<<" AND "<<y<<endl;
		}
};
int main()
{
	c <int> o1;
	o1.func(4,5);
	c <char> o2;
	o2.func('A','I');
	c <float> o3;
	o3.func(-1.9,3.8);
	return 0;
}
