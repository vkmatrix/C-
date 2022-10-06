//function template with generic parameter(s)
#include<iostream>
using namespace std;
template<class T>
void add(T x,T y)
{
	T d=x+y;
	cout<<"sum="<<d<<endl;
}
int main()
{
	add(0.4,3.4);
	add(2,13);
	return 0;
}
