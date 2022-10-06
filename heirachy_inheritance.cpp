#include<iostream>
using namespace std;
class staff
{
	protected:
		int code;
		char name[20];
	public:
		void staff_input()
		{
			cout<<"enter code:"<<endl;
			cin>>code;
			cout<<"enter name:"<<endl;
			cin>>name;
		}
		void staff_output()
		{
			cout<<"STAFF CODE:"<<code<<endl<<"STAFF NAME:"<<name<<endl;
		}
		
		
	
};
class teacher:public staff
{
	protected:
		char subject[20],publication[20];
	public:
		void teacher_input()
		{
			cout<<"enter teacher subject:"<<endl;
			cin>>subject;
			cout<<"enter publication:"<<endl;
			cin>>publication;
		}
		
};
class officer:public staff
{
	protected:
		char grade[20];
	public:
		void grade_input()
		{
			cout<<"enter grade of officer:"<<endl;
			cin>>grade;
		}
};
class typist:public staff
{
	protected:
		char speed[20];
	public:
		void speed_input()
		{
			cout<<"enter typist speed:"<<endl;
			cin>>speed;
		}
		void speed_output()
		{
			cout<<"STAFF TYPING SPEED:"<<speed<<endl;
		}
};
class regular:public typist
{
	protected:
		float salary;
	public:
		void input_salary()
		{
			cout<<"enter salary:"<<endl;
			cin>>salary;
		}
		void salary_output()
		{
			cout<<"MONTHLY SALARY(REGUALR):"<<salary<<endl;
		}
};
class casual:public typist
{
	protected:
		float wage;
	public:
		void input_wage()
		{
			cout<<"enter daily wage:"<<endl;
			cin>>wage;
		}
		void wage_output()
		{
			cout<<"DAILY WAGE(CASUAL):"<<wage<<endl;
		}
};
int main()
{
	regular r1;
	r1.staff_input();
	r1.speed_input();
	r1.input_salary();
	cout<<"************************************************"<<endl;
	cout<<"STAFF DATA"<<endl;
	r1.staff_output();
	r1.speed_output();
	r1.salary_output();
	return 0;
}
