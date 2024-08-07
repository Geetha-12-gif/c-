#include<iostream>
using namespace std;
class pyramid
{
	public:
		int n,i,j;
		void display()
		{
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<i<<" ";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	int n=5;
	pyramid p;
	p.display();
}