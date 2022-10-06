#include<iostream>
using namespace std;
class VK
{
	private:
		int a;
	public:
		VK(int val)
		{
			a=val;
		}
		void display()
		{
			cout<<a<<endl;
		}
};
int main()
{
	VK o1(10);
	o1.display();
	return 0;
}
