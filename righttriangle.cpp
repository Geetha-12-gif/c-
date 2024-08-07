#include<iostream>
using namespace std;
class rt
{
	public:
		int i,j,n;
		rt()
		{
			 n=5;
		}
		void display()
		{
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
				{
					cout<<"* ";
				}
				cout<<"\n";
			}
		}
};
int main()
{
	rt pattern;
	pattern.display();
	}