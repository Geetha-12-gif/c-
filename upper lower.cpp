#include<iostream>

using namespace std;
int main()
{
	string s;
	cout<<"Enter the string";
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		s[i]=toupper(s[i]);
		cout<<s[i];
	}
	for(int j=0;j<s.length();j++)
	{
		s[j]=tolower(s[j]);
		cout<<s[j];
	}
}