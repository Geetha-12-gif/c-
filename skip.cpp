#include<iostream>
using namespace std;
class number
{
	public:
		int m=50;
		int n=100;
		int k=7;
};
class skipper:public number
{
	public:
		int i;
		void display()
		{
			for(i=m;i<=n;i=i+k+0)
			{
				cout<<i<<" ";
			}
		}
};
int main()
{
	skipper s;
	s.display();
}