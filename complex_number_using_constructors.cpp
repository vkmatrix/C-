#include<iostream>
using namespace std;
class complex
{
	private:
		double real,imag;
	public:
		complex()
		{
			double r,i;
			cout<<"enter real and imaginary parts: "<<endl;
			cin>>r>>i;
			real=r;
			imag=i;
		}
		void display();
};
void complex::display()
{
	cout<<"COMPLEX NUMBER IS: "<< real<<" + ("<<imag<<")j"<<endl;
}
int main()
{
	int it,n;
	double r,i;
	cout<<"enter number of complex numbers to be initialized:"<<endl;
	cin>>n;
	complex c[n];
	for(it=0;it<n;it++)
	{
		c[it].display();
	}
	return 0;
}
