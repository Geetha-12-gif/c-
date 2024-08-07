#include<iostream>
using namespace std;
int main()
{
	int a,y;
	cout<<"amount"<<endl;
	cin>>a;
	cout<<"years"<<endl;
	cin>>y;
	int r;
	char sc;
	cout<<"senior citizen (y/n)";
	cin>>sc;
	if(sc=='y')
	{
		r=12;
		cout<<"interest"<<(a*y*r)/100;
	}
	else
	{
		r=10;
		cout<<"interest"<<(a*y*r)/100;
	}
}