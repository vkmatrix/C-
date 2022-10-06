//C++ program to perform prime number checking ,fibonacci series and armstrong or not using classes and objects
#include<iostream>
using namespace std;
class A
{
	private:
		int n;
	public:
		void prime()
		{
			int i,flag=0;
			cout<<"enter number to check for prime or not:"<<endl;
			cin>>n;
			if(n>1)
			{
				for(i=2;i<n;i++)
				{
					if(n%i==0)
					{
						flag=1;
						break;
					}
				}
			}
			if(flag)
			{
				cout<<"not a prime"<<endl;
			}
			else
			{
				cout<<"prime"<<endl;
			}
			
		}
		void fibonacci()
		{
			int n1,n2,nth,count=0;
			cout<<"enter total number of terms of fibonacci series:"<<endl;
			cin>>n;
			n1=0;
			n2=1;
			while(count<n)
			{
				cout<<n1<<endl;
				nth=n1+n2;
				n1=n2;
				n2=nth;
				count++;
			}
			
		}
		void armstrong()
		{
			cout<<"enter number to check for armstrong or not:"<<endl;
			cin>>n;
			int temp=n,sum=0,r;
			while(n>0)
			{
				r=n%10;
				sum=sum+(r*r*r);
				n=n/10;
			}
			if(temp==sum)
			{
				cout<<"armstrong"<<endl;
			}
			else
			{
				cout<<"non-armstrong"<<endl;
			}
		}
};
int main()
{
	A o1;
	o1.prime();
	o1.fibonacci();
	o1.armstrong();
	return 0;
}
