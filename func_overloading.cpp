//overloading a function template in C++
#include<iostream>
using namespace std;
template<class A>
void func(A x)
{
	cout<<x<<endl;
}
template<class A,class B>
void func(A x,B y)
{
	cout<<x<<y<<endl;
}
int main()
{
	func(-1);
	func('a',1.9);
	return 0;
}
