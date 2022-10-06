//function template with one generic and a non-generic parameter
#include<iostream>
using namespace std;
template<class T>
void add(T x,float y)
{
	T d=x+y;
	cout<<"sum="<<d<<endl;
}
int main()
{
	add(0.4,3.4);
	add(2,13.4);
	return 0;
}
