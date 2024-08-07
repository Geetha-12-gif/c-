#include<iostream>
using namespace std;
int main()
{
	int n;
	int flag=1;
	cout<<"enter a number"<<endl;
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
	
		if(n%i == 0)
		{
			flag=0;
			break;
		}
		
	}
	if(n<=1)
	{
		flag =0;
	
	}
	if(flag == 1){
		cout<<"is a prime number";
	}
	else
		{
			cout<<"it is a not a prime number";
			
		}
	
}