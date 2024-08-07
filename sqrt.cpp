#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cout<<"enter number";
	cin>>num;
	if(num>=0)
	{
		double squareroot=sqrt(num);
		cout<<"square root of"<<num<<"is:"<<squareroot;
	}
	else
	{
		cout<<"square root has negative valuees";
	}
	return 0;
}