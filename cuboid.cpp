#include<iostream>
using namespace std;
class cuboid
{
	public:
	double length=10;;
	double breadth=10;
	double height=10;
};
class rectangle :public cuboid
{
	public:
		void display()
		{
			cout<<"area of rectangle"<<(length*breadth);
		}
};
class shape :public cuboid
{

	public:
		void display1()
		{
			cout<<"volume of rectangle"<<(length*breadth*height);
		}
};
int main()
{
	rectangle c;
	c.display();
	shape s;
	s.display1();
}