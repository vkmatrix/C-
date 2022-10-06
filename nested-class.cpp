//nested class
#include<iostream>
using namespace std;
class outer
{
	private:
		int a,b;
	public:
		class inner
		{
			private:
				int z;
			public:
				void multiply(int c,int d)
				{
					z=c*d;
					cout<<z<<endl;
				}
		};
		void getdata()
		{
			cin>>a>>b;
		}
		
};
int main()
{
	outer o1;
	o1.getdata();
	outer :: inner o2;
	o2.multiply();
	return 0;
}
