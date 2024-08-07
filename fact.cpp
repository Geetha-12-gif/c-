#include <iostream>
using namespace std;
int factorial(int n);
int main()
{
	int n,i;
	cout<<"Enter a number";
	cin>>n;
	cout<<"factorial of"<<n<<factorial(n);
}
int factorial(int n)
{
	if(n>1)
	{
		return n*factorial(n-1);
	}
	else
	{
		return 1;
	}
}