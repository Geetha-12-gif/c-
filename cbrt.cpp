#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout<<"enter number:";
	cin>>n;
	if(n>=0)
	{
		double cuberoot=cbrt(n);
		cout<<"cuberoot of"<<n<<"is"<<cuberoot;
		
	}
	else
	{
		cout<<"given number is negative";
	}
}