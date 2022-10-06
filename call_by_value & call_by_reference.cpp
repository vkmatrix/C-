
#include<iostream>
using namespace std;
class call
{
	private:
		int a,b;
	public:
		void val(int a,int b)
		{
			cout<<"PASS BY VALUE"<<endl;	
			cout<<"before swap:"<<"a="<<a<<"\t"<<"b="<<b<<endl;
			int temp=a;
			a=b;
			b=temp;
			cout<<"after swap:"<<"a="<<a<<"\t"<<"b="<<b<<endl;
			
		}
		void ref(int *a,int *b)
		{
			cout<<"PASS BY REFERENCE"<<endl;
			cout<<"before swap:"<<"a="<<*a<<"\t"<<"b="<<*b<<endl;
			int temp=*a;
			*a=*b;
			*b=temp;
			cout<<"after swap:"<<"a="<<*a<<"\t"<<"b="<<*b<<endl;
		}
};

int main()
{
	int x,y;
	cout<<"enter the numbers a and b:"<<endl;
	cin>>x>>y;
	call c1;
	c1.val(x,y);
	cout<<endl;
	c1.ref(&x,&y);
	return 0;
}
