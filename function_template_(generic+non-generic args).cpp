//function template with generic and non-generic parameters
#include<iostream>
using namespace std;
template<class T>
void mul(T a,int n)
{
	T c=a*n;
	cout<<"MULTIPLICATION = "<<c<<endl;
}
int main()
{
	mul(123456789,2);
	mul('a',2);
	mul(1,3);
	mul(2.4,4);
	return 0;
}
