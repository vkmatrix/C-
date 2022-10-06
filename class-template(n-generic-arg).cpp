//class template with more than one generic argument
//simple get() and put() example
#include<iostream>
using namespace std;
template<class T1,class T2>
class A
{
	private:
	T1 x;
	T2 y;
	public:
		void add(T1 x,T2 y)
		{
			T1 s=x+y;
			cout<<"*** SUM ***"<<endl;
			cout<<s<<endl;
			cout<<endl;
		}
		
};
int main()
{
	A <int,int> o1;
	o1.add(1,2);
	A <double,char> o2;
	o2.add(12.3,'a');
	A <unsigned long int,unsigned long int> o3;
	o3.add(123456789,1234567890);
	return 0;	
}
