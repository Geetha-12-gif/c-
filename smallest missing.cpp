#include<iostream>
using namespace std;
int main()
{
	int size,index;
	cout<<"enter the size"<<endl;
	cin>>size;
	int a[size];
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	for(index=0;index<size;index++)
	{
		if(a[index]!=index)
		{
		cout<<index<<endl;	
		return 0;
		}
	}
	cout<<size<<endl;
	
}