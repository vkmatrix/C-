//function overloading
#include<iostream>
using namespace std;
class A
{
	private:
		int a,b,c;
	public:
		void add(int a,int b)
		{
			int x=a+b;
			cout<<"sum is "<<x<<endl;
		}
		void add(int a,int b,int c)
		{
			int d=a+b+c;
			cout<<"sum is "<<d<<endl;
		}
};
int main()
{
	A o1;
	o1.add(2,3);
	o1.add(1,2,1);
	return 0;
}
