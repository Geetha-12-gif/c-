#include<iostream>
#include<string>
using namespace std;
class info
{
	public:
		string name="geetha";
		int age=20;
		
		int marks,total,agg,m1,m2,m3,m4;
};
class marks:public info
{
	public:
		void getdata()
		{
			m1=40;
			m2=60;
			m3=70;
			m4=80;
		}
		void display()
		{
			total=m1+m2+m3+m4;
			agg=total/4;
			cout<<name<<endl;
			cout<<age<<endl;
			cout<<"total marks"<<total<<endl;
			cout<<"aggregate"<<agg;
			
		}
};
int main()
{
	marks m;
	m.getdata();
	m.display();
	}