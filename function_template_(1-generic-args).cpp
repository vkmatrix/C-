//function template with only one generic argument
#include<iostream>
using namespace std;
template<class T>
void add(T a,T b)
{
	T c=a+b;
	cout<<"added datatype = "<<c<<endl;
}
int main()
{
	add(1,2);
	add(1.2,3.4);
	//add(2,3.6); exception occurs due two passing (int,double) at function call please check function defenition
	add('a','b') //ascii value of the sum is returned
	return 0;
}
