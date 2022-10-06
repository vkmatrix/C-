//operator overloading in c++
#include<iostream>
using namespace std;
class c
{
	private:
		int a,b;
	public:
		void get()
		{
			cin>>a>>b;
		}
		void display()
		{
			cout<<a<<endl<<b<<endl;
		}
		void operator -();
};
void c::operator -()
{
		a=-a;
		b=-b;
}
int main()
{
	c o1;
	o1.get();
	cout<<"before overload"<<endl;
	o1.display();
	-o1;
	cout<<"after overload"<<endl;
	o1.display();
	return 0;
}
