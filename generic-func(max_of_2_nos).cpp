//generic function to compute greatest of two numbers
#include<iostream>
using namespace std;
template<class T>
void greatest(T a,T b)
{
	if(a>b)
	{
		cout<<a<<endl;
	}
	else
	{
		cout<<b<<endl;
	}
}
int main()
{
	greatest(1,2);
	return 0;
}



