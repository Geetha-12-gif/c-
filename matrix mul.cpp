#include<iostream>
using namespace std;
int main()
{
	int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};
	int b[3][3]={{1,1,1},{2,1,2},{3,2,1}};
	int i,j,k;
	int mul[10][10]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		cout<<mul[i][j];
		}
		cout<<endl;
	}
	
	
}