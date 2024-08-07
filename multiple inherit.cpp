#include<iostream>
using namespace std;
class a
{
	public:
		int x=100;
};
class b
{
	public:
		int y=200;
};
class c:public a,public b
{
	public:
		void display()
		{
		
		int z=300;
		cout<<"x"<<x<<endl;
		cout<<"y"<<y<<endl;
		cout<<"z"<<z<<endl;
		
	}
		
};
int main()
{
	c C;
	C.display();
}