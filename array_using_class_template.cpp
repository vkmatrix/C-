#include<iostream>
using namespace std;
int i;
template<class A>
class c
{
	private:
		A x,y;
		int top=-1;
		int size=10;
		A array[10];
		int val;
	public:
		void push(A val)
		{
			if(top==size-1)
			{
				cout<<"stack full"<<endl;
			}
			else
			{
				top++;
				array[top]=val;
			}
		}
		void pop()
		{
			if(top=-1)
			{
				cout<<"stack empty"<<endl;
			}
			else
			{
				cout<<"deleted element is:"<<array[top]<<endl;
				top--;
			}
		}
		void display()
		{
			if(top==-1)
			{
				cout<<"stack empty"<<endl;
			}
			else
			{
				cout<<"array elements are:"<<endl;
				i=top;
				while(i>0)
				{
					cout<<array[i];
					i--;
				}
			}
		}
};
int main()
{
	c <int> o1;
	o1.push(10);
	o1.push(20);
	o1.pop();
	return 0;
}
