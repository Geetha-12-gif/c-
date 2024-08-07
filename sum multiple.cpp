#include<iostream>
using namespace std;
class sum
{
	public:
		int x,y;
};
class b
{
	public:
		void getdata()
		{
			int x,y;
			cout<<"enter the x"<<endl;
			cin>>x;
			cout<<"enter the y"<<endl;
			cin>>y;
		}
};
class c:public b,public sum
{
	public:
		void display()
		{
			int x,y;
			int s=x+y;
			cout<<s;
		}
};
int main()
{
	c su;
	su.getdata();
	su.display();
	}