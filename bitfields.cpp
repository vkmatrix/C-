#include<iostream>
using namespace std;
struct date
{
	// the prefixed "unsigned short int" bitfield is used to alter the minimal memory of int and hence bitfields are memory-efficient;
	unsigned short int day;
	unsigned short int month;
	unsigned short int year;
};
int main()
{
	date d1;
	d1.day=10;
	d1.month=8;
	d1.year=2022;
	cout<<d1.year<<endl;
	return 0;
}
