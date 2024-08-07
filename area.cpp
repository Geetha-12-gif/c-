#include<iostream>
using namespace std;
class area
{
	
	public:
		int r,b,h,l,br;
		double a1,a,a2;
		void getdata()
		{
			cout<<"enter the radius"<<endl;
			cin>>r;
			cout<<"enter the base"<<endl;
			cin>>b;
			cout<<"enter the height"<<endl;
			cin>>h;
			cout<<"enter the length"<<endl;
			cin>>l;
			cout<<"enter the breadth"<<endl;
			cin>>br;
		}
		void display()
		{
			a=0.5*b*h;
			a1=3.14*r*r;
			a2=l*br;
			cout<<"area of triangle"<<a;
				cout<<"area of circle"<<a1;
					cout<<"area of rectangle"<<a2;
		}
		
};
int main()
{
	area ar;
	ar.getdata();
	ar.display();
}
