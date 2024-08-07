#include<iostream>
using namespace std;
int main()
{
	int n=0;
	cout<<"enter the number";
	cin>>n;
	int a[n];
	int i,j,k;
	for(i=0;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}

}