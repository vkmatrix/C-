#include<iostream>
using namespace std;
class assignment
{
	private:
		float sarea,carea;
		float simpint;
		int grade_point;
	public:
		void square()
		{
			cout<<"AREA OF SQUARE"<<endl;
			float side;
			cout<<"enter side:\n"<<endl;
			cin>>side;
			sarea=side*side;
			cout<<"AREA="<<sarea<<endl;
		}
		void circle()
		{
			cout<<"AREA OF CIRCLE"<<endl;
			float rad;
			cout<<"enter radius:\n"<<endl;
			cin>>rad;
			carea=3.14*rad*rad;
			cout<<"AREA="<<carea<<endl;
		}
		void simp_int()
		{
			cout<<"SIMPLE INTEREST"<<endl;
			float P,R,T;
			cout<<"enter principal amount"<<endl;
			cin>>P;
			cout<<"enter rate percent per annum"<<endl;
			cin>>R;
			cout<<"enter time duration in years"<<endl;
			cin>>T;
			float rp=R/100;
			simpint=P*rp*T;
			cout<<"Simple Interest="<<simpint;
		}
		void grading()
		{
			cout<<"enter grade point"<<endl;
			cin>>grade_point;
			switch (grade_point)
			{
				case 10:
					cout<<"S grade"<<endl;
					break;
				case 9:
					cout<<"A grade"<<endl;
					break;
				case 8:
					cout<<"B grade"<<endl;
					break;
				case 7:
					cout<<"C grade"<<endl;
					break;
				case 6:
					cout<<"D grade"<<endl;
					break;
				case 5:
					cout<<"E grade"<<endl;
					break;
				default:
					cout<<"Fail"<<endl;
					break;
			}
		}
};
int main()
{
	assignment a1;
	a1.square();
	a1.circle();
	a1.simp_int();
	a1.grading();
	return 0;
}
