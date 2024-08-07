#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"age"<<endl;
	cin>>age;
	if(age>=18)
	{
		cout<<"eligible to vote";
	}
	else
	{
		int diff=18-age;
		cout<<"eligible after"<<diff;
	}
}