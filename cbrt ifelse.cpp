#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double r;
	cout<<"enter the number"<<endl;
	cin>>n;
	if(n<=0)
	{
		cout<<"error";
	}
	
	else
	{
		r=cbrt(n);
		cout<<r;
	}
}