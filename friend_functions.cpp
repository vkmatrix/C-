#include<iostream>
using namespace std;
class mean
{
	private:
		double a,b;
	public:
		void get()
		{
			cin>>a>>b;
		}
		friend double avg(mean o1);
};
double avg(mean o1)
{
	double d=(o1.a+o1.b)/2;
	cout<<"MEAN = "<<d<<endl;
	return d;
}
int main()
{
	mean m1;
	m1.get();
	avg(m1);
	return 0;
}

