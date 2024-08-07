#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[20];
	char s2[20];
	cout<<"enther mail"<<endl;
	cin>>s1;
	cout<<"username"<<endl;
	cin>>s2;
	if(strcmp(s1,s2)==0)
	{
		cout<<"valid mail";
	}
	else
	{
		cout<<"invalid";
	}
}