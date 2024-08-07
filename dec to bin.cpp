#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int dec=0;
	int base=1;
	int i;
	string b;
	cout<<"enter number=";
	cin>>b;
	for(i=b.length()-1;i>=0;i--)
	{
		if(b[i]==1)
		{
			dec=dec+base;
		}
		base=base*2;
	}
	cout<<b;
	
}