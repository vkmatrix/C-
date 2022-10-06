#include<iostream>
using namespace std;
class A
{
	private:
	int a,b;
	protected:
	int c,d;
	public:
		A()
		{
			a=1;
			b=2;
		}
	void pr()
	{
		cout<<a<<"\t"<<b<<endl;
	}	
};
class B:public A //class B is inherited from A using public declaration ie.,PUBLIC MODE OF INHERITANCE
{
	private:
		
	public:
		void hello()
		{
			cout<<"i am publicly inherited from A"<<endl;
		}
		
		
	protected:
		//protected members of base class A becomes protected members of the derived class in public inheritance
		
};
class C:private  A
{
	private:
	//protected memebers of base class
	public:
	//private members of base class becomes public in derived class	
	void son()
	{
		cout<<"i am privately inherited from A"<<endl;
		
	}
};
class D:protected A
{
	private:
		
	public:
		void prot()
		{
			cout<<"i am protectedly inherited from A"<<endl;
		}
	protected:
		int c,d;
		
};
int main()
{
	B b; // object is created in class B 
	b.pr(); // calling of public member function in class A using object of class B
	C c;
	c.son();
	D d;
	d.prot();
	return 0;
}
