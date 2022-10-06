//overloading a function template in C++ addition of 2 nos and addition of 3 nos
#include<iostream>
using namespace std;
template<class A,class B>
void add(A x,B y)
{
	int add=x+y; 
	cout<<"sum of two numbers:"<<add<<endl;
}
template<class A,class B,class C>
void add(A x,B y,C z)
{
	int add=x+y+z;
	cout<<"sum of three numbers:"<<add<<endl;
}
int main()
{
	add(3.0,4);
	add(2,3,4.6);
	return 0;
}
