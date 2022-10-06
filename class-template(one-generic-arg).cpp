//class template with one generic parameter
//stack implementation
#define max 10
#include<iostream>
using namespace std;
template<class T>
class stack
{
	private:
		int top;
		T s[10];
	public:
		stack()
		{
			top=-1;
			cout<<"stack created with static size of 10 elements"<<endl;
		}
		void push(T val)
		{
			if(top<=9)
			{
				s[++top]=val;
			}
			else
			{
				cout<<"OVERFLOW"<<endl;
			}
		}
		T pop()
		{
			if(top==-1)
			{
				cout<<"UNDERFLOW"<<endl;
			}
			else
			{
				return s[top--];
			}
		}
		void display()
		{
			if(top==-1)
			{
				cout<<"UNDERFLOW"<<endl;
			}
			else
			{
				int i;
				for(i=top;i>=0;i--)
				{
					cout<<s[i]<<endl;
				}
			}
		}
};
int main()
{
	stack <int>s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	cout<<s1.pop()<<"is popped"<<endl;
	s1.display();
	cout<<endl<<endl;
	stack <char> s2;
	s2.push('a');
	s2.push('b');
	s2.push('c');
	cout<<s2.pop()<<" is popped"<<endl;
	s2.display();
	return 0;
}
