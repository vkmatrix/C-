#include<iostream>
using namespace std;
class a
{
	private:
		int x;
	public:
		inline void cube()
		{
			cout<<"enter:";
			cin>>x;
			int y=x*x*x;
			cout<<"CUBE:"<<y<<endl;
		}
};
int main()
{
	a a1;
	a1.cube(); //copy of inlined function cube()
	return 0;
}
