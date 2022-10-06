#include<iostream>
using namespace std;
class test
{
	private:
		int n;
	public:
		void getdata()
		{
			cout<<"enter number: "<<endl;
			cin>>n;
		}
		test add(test t);
};
test test::add(test t)
{
	test tadd;
	tadd.n=n+t.n;
	cout<<"ADDITION = "<<tadd.n<<endl;
	return tadd;
}
int main()
{
	test t1,t2;
	t1.getdata();
	t2.getdata();
	t2.add(t1);
	return 0;
}
