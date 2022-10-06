//addition of two complex numbers by means of overloading + operator
#include<iostream>
using namespace std;
class complex
{
	private:
	double real,imag;
	public:
	void get()
	{
		cin>>real>>imag;
	}	
	complex operator +(complex c1);
};
complex complex::operator +(complex c1)
{
	complex c3;
	c3.real=real+c1.real;
	c3.imag=imag+c1.imag;
	cout<<c3.real<<" + ("<<c3.imag<<")j"<<endl;
	return c3;
}
using namespace std;
int main()
{
	complex o1,o2;
	o1.get();
	o2.get();
	o1+o2;
	return 0;
}
