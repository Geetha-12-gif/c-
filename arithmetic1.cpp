#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	char op;
	cout<<"enter the first number\n";
	cout<<"enter the second number";
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<n1+n2;
			break;
			case '-':
				cout<<n1-n2;
				break;
				case '*':
					cout<<n1*n2;
					break;
					case '/':
						cout<<n1/n2;
						break;
						case '%':
							cout<<n1%n2;
							break;
							default:
								cout<<"Invalid input";
	}
}