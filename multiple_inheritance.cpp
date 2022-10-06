//multiple inheritance
#include<iostream>
using namespace std;
class internal
{
	protected:
		int gt;
	public:
		void computation()
		{
			gt=cat_mark+present+amark;
			return gt;
		}
		
};
class cat
{
	protected:
		int cat_mark;
	public:
		void input_cat_mark()
		{
			cin>>cat_mark;
		}
};
class attendance
{
	protected:
		int present;
	public:
		void input_attendance_mark()
		{
			cin>>present;
		}
};
class assignment
{
	protected:
		int amark;
	public:
		void input_assignment_mark()
		{
			cin>>amark;
		}
};
int main()
{
	internal s1;
	s1.computation();
	
	
	return 0;
}


