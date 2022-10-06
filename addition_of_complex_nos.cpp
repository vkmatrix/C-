#include<iostream>
using namespace std;
class complex
{
	private:
		double real,imag;
	public:
		void getdata()
		{
			cout<<"enter real and imaginary parts:"<<endl;
			cin>>real>>imag;
		}
		complex add(complex x);
};
complex complex::add(complex t1)
{
	complex t3;
	t3.real=real+t1.real;
	t3.imag=imag+t1.imag;
	cout<<"ADDED COMPLEX NUMBER IS: "<<t3.real<<" + ("<<t3.imag<<")j"<<endl;
	return t3;
}
int main()
{
	complex c1,c2;
	c1.getdata();
	c2.getdata();
	c2.add(c1);
	return 0;
}
