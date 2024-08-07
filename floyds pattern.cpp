#include<iostream>
using namespace std;
int main()
{
	int i,j,n;

	cout<<"enter the numbe=";
	cin>>n;
		int count=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<count<<" ";
			count+=1;
		}
		cout<<"\n";
	}
}