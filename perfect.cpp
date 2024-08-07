#include<iostream>
using namespace std;
int main()
{
	int n,sum;
	cout<<"enter number";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;
			cout<<"is a perfect number";
			break;
		}
		else
		{
			cout<<"not a perfect number";
		}
	}
}