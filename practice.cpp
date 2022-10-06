#include<iostream>
using namespace std;
class A
{
	private:
		int id;
		int age;
	public:
		A(int i,int a)   //blueprint of enitity assigned using parameterized constructor
		{
			id=i;
			age=a;
		}
		A(A &t)    //copy constructor used to copy the already existing blueprint to a new object
		{
			id=t.id;
			age=t.age;
		}
};
int main()
{
	A s1(1,12);
	A s2(s1);
	cout<<s2.id<<endl;
	return 0;
}
