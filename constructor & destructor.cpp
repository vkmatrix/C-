#include<iostream>
using namespace std;
class C
{
	public:
	C()
	{
		cout<<"MEMORY ALLLOCATED TO OBJECT USING CONSTRUCTOR"<<endl;
	}
	~C()
	{
		cout<<"MEMORY FLUSHED FROM OBJECT BY DESTRUCTOR"<<endl;
	}
};
int main()
{
	C o1;
	return 0;
}
