#include<iostream>
using namespace std;
int main()
{
	int n,i,sum=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==n)
	{
		cout<<"is a perfect number";
	}
	else
	{
		cout<<"is not a perfect number";
	}
}