//manipulators are used to alter the output string classes and it is of 2 types
// without arguments-endl,ends,ws,flush
//with arguments-setbase(),setprecision(),setflag(),setfill(),setw()
#include<iostream>
using namespace std;
#include<iomanip>
class hx{
	private:
		int a;
	public:
		void w_a();
};
void hx::w_a()
{
	cout<<"setw(12)"<<endl<<"setfill(*)"<<endl<<"setprecision(2)"<<endl<<"setbase(10)"<<endl<<"setiosflags";
}
void 
int main()
{
	hx hr;
	hr.w_a();
	return 0;
}

