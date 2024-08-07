#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[20];
	cout<<"enter the string"<<endl;
	cin>>s;
	int flag=0;
	int length=strlen(s);
	for(int i=0;i<length;i++)
	{
		
		if(s[i]!=s[length-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		cout<<"is not a palindrome";
	}
	else
	{
		cout<<" a palindrome";
	}
}