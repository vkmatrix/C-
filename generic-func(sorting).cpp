//generic function to sort array
#include<iostream>
using namespace std;
template<class T>
void sort(T a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted Array"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
}
int main()
{
	int array[10]={11,-6,4,0,90};
	double array2[10]={9.0,2.0,11.4};
	int n=5,n2=3;
	sort(array,n);
	cout<<endl;
	sort(array2,n2);
	return 0;
}


