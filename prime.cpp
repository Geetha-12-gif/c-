#include <iostream>
using namespace std;
bool isprime(int n);
int main()
{
	int n;
	cout<<"enter number";
	cin>>n;
	if(isprime(n))
	{
		cout<<"prime number"<<n;
	}
	else
	{
		cout<<"not a prime number"<<n;
	}
}
bool isprime(int n){
	bool checkprime=true;
	if(n==0||n==1)
	{
		checkprime=false;
	}
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			isprime = false;
			break;
		}
	}
	return checkprime;
}