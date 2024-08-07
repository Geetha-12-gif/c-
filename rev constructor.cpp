#include<iostream>
using namespace std;
class reverse
{
	public:
		int digit,n;
		
		int rev=0;
		reverse(int num):n(num)
		{
			while(n!=0)
			{
				digit=n%10;
				rev=rev*10+digit;
				n/=10;
			}
		}
		void display()
		{
			cout<<"reversed number"<<rev;
		}
};
int main()
{
	int num=12345;
	reverse r(num);
	r.display();
}