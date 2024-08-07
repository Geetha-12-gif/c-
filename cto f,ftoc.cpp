#include<iostream>
using namespace std;
int main()
{
	int c,f;
	cout<<"tempertature for celsius";
	cin>>c;
	cout<<"temperature for farenheit"<<endl;
	cin>>f;
	float m=(f-32)/1.8;
	cout<<"farenheit to celsius"<<m;
	float n=(c*1.8)+32;
	cout<<"celsius to farenheit"<<n;
}