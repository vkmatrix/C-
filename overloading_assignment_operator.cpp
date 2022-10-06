#include<iostream>
using namespace std;
class A
{
	private:
		int a,b;
	public:
		void get()
		{
			cin>>a>>b;
		}
		void operator=(A o1);
};
void A::operator=(A o1)
{
	a=o1.a;
	b=o1.b;
	cout<<"values assigned"<<endl;
}
int main()
{
	A o1,o2;
	o1.get();
	o2=o1;
	return 0;
}
