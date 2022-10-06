#include<iostream>
using namespace std;
class subject
{
	private:
		int id,age,mark;
	public:
		subject(int val1,int val2)   //blueprint using parameterized constructor
		{
			id=val1;
			age=val2;
			cout<<"ORGINIAL ENTITY CREATED"<<endl;
		}
		void getmark()
		{
			cout<<"enter mark:"<<endl;
			cin>>mark;
		}
		subject(subject &o1)   // actual copy constructor
		{
			id=o1.id;
			mark=o1.mark;
			cout<<"blueprint acquired onto object"<<endl;
		}
};
int main()
{
	subject s1(1,18);
	subject s2(s1);
	subject s3(s2);
	subject s4(s1);
	return 0;
}
