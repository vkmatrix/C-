//multi-level inheritancee
#include<iostream>
using namespace std;
class student
{
	protected:
		int rno,mark;
	public:
		void inputroll()
		{
			cin>>rno;
		}
};
class marks:public student
{
	public:
		void inputmark()
		{
			cin>>mark;
		}
};
class grade:public marks
{
	public:
		void grading()
		{
			if(mark>=90)
			{
				cout<<"S Grade";
			}
			else
			{
				cout<<"Non-S Grade";
			}
		}
};
int main()
{
	grade s1;
	s1.inputroll();
	s1.inputmark();
	s1.grading();
	return 0;
}
