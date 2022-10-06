#include<iostream>
#include<string.h>
using namespace std;
class staff
{
	protected:
		int code;
		char name[30];
	public:
		void ipstaff()
		{
			cout<<"enter name and code:"<<endl;
			cin>>code>>name;
		}
		void opstaff()
		{
			
		}
		
};
class teacher: public staff
{
	protected:
		char subject[40],publication[30];
	public:
		void ipteacher()
		{
			cin>>subject>>publication;
		}
		void opteacher()
		{
			cout<<subject<<publication;
		}
};
class typist:public staff
{
	protected:
		char speed[200];
	public:
		void ipspeed()
		{
			cin>>speed;
		}
		void opspeed()
		{
			cout<<speed;
		}
};
class officer:public staff
{
	protected:
		char gender;
	public:
		void ipofficer()
		{
			cin>>gender;
		}
		void opofficer()
		{
			cout<<gender;
		}
};
class regular:public typist
{
	protected:
		int salary;
	public:
		void ipregular_typist()
		{
			cin>>salary;
		}
		void opregular_typist()
		{
			cout<<salary;
		}
};
class casual:public typist
{
	protected:
		int daily_wages;
	public:
		void ipcasual_wages()
		{
			cin>> daily_wages;
		}
		void opcasual_wages()
		{
			cout<< daily_wages;
		}
};
int main()
{
	casual c1;
	c1.ipstaff();
	c1.opstaff();
	return 0;
}



