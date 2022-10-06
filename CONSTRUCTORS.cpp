//constructors
#include<iostream>
using namespace std;
class A
{
	private:
		unsigned short int x;
		double y;
	public:
		A()  //default constructor
		{
			x=4;
			y='Q';
			cout<<"MEMORY ALLOCATED USING DEFAULT CONSTRUCTOR"<<endl;
		}
		A(unsigned short int a,double b) //parameterized constructor
		{
			x=a;
			y=b;
			cout<<"MEMORY ALLOCATED USING PARAMETERIZED CONSTRUCTOR"<<endl;
		}
		A(A &obj)  //copy constructor
		{
			x=obj.x;
			y=obj.y;
			cout<<"MEMORY ALLOCATED USING COPY CONSTRUCTOR(memory acquired from already existing parameterized constructor)"<<endl;
			cout<<x<<" "<<y<<endl;
		}
};
int main()
{
	A o1;
	A o2(1,1.23);
	A o3(o2);
	return 0;
}
