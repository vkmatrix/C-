//class template with generic and non-generic parameters
//linear search
#include<iostream>
using namespace std;
template<class A,int n>
class ls
{
	private:
		A a[n];
	public:
		void create_array()
		{
			cout<<"enter "<<n<<" array elements:"<<endl;
			int i;
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void display_array()
		{
			cout<<"array elements are:"<<endl;
			int i;
			for(i=0;i<n;i++)
			{
				cout<<a[i]<<endl;
			}
		}		
};
int main()
{
	ls <int,4>l1;
	l1.create_array();
	l1.display_array();
	cout<<endl;
	ls <char,5>l2;
	l2.create_array();
	l2.display_array();
	return 0;	
}
