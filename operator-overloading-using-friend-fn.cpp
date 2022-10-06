#include<iostream>
using namespace std;
class A
{
	private:
		int i;
	public:
		A(int val)
		{
			i=val;
		}
		friend void operator ++(A o1);
};
void operator ++(A o1)
{
	o1.i++;
	cout<<o1.i<<endl;
}
int main()
{
	A o1(1);
	++o1;
	return 0;
}
