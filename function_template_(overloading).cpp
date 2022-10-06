#include<iostream>
using namespace std;
template<class T>
void add(T a,T b)
{
	T c=  a+ b;
	cout<<"SUM = "<<c<<endl;
}
template<class T1,class T2>
void add(T1 a,T2 b)
{
	T1 d=a+b;
	cout<<"SUM = "<<d<<endl;
}
template<class T1>
void add(char c,T1 a)
{
	char x=c+a;
	cout<<"SUM = "<<x<<endl;
}
int main()
{
	add(1,2);
	add(1.40,2);
	add('x',2.0);
	return 0;
}
