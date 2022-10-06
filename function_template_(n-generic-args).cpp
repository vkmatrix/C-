//function template  with two generic parameters
#include<iostream>
using namespace std;
template<class A,class B>
void add(A x,B y)
{
	A z=x+y;
	cout<<"SUM = "<<z<<endl;
}
int main()
{
	add(2,4.5);	
	add(65,'A');
	add(5.5,5);
	return 0;
}
