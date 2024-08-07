#include<iostream>
using namespace std;
int main()
{
	int o,e,n;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		if(n%2 == 0)
		{
			cout<<"it is a evennumber";
			break;
		}
		else
		{
			cout<<"it is a odd number";
			break;
		}
	}
}