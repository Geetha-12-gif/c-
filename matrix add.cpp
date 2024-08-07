#include<iostream>
using namespace std;
int main()
{
	int a[10][10]={{1,2,3,},{1,2,3},{1,2,3}};
	int b[10][10]={{1,2,3},{1,2,3},{1,2,3}};
	int i,j,k;
	int mul[10][10]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			
			
				mul[i][j]=a[i][j]+b[i][j];
			
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<mul[i][j];
		}
		cout<<"\n";
	}
}