#include<iostream>
using namespace std;
class cube
{
	public:
		int i,n;
		cube()
		{
			 n=0;
			 i=1;
		}
		cube(int p,int q)
		{
			 n=p;
			i=q;
		}
		void display()
		{
			cout<<"enter the number";
			cin>>n;
			for(i=1;i<=n;i++)
			{
				cout<<i*i*i;
			}
		}
};
int main()
{
	int p,q;
	cube c(p,q);
	
	c.display();
}