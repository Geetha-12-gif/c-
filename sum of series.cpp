#include<iostream>
using namespace std;
class sum
{
	public:
		int n,add,i;
		sum()
		{
			
			add=0;
		}
		sum(int q)
		{
			
			add=q;
		}
		void display()
		{
			cout<<"enter the number";
			cin>>n;
			for(i=0;i<=n;i++)
			{
				add+=i;
				cout<<"sum of series"<<add<<endl;
			}
			
		}
};
int main()
{
	int q;
	sum s(q);
	s.display();
	}