#include<iostream>
using namespace std;
class student
{
	public:
	static int rollno;
	char name[12];
	static int count;
	void get()
{
		rollno++;
		cout<<"enter the rollno and name is =";
		cin>>rollno>>name;
	}
	static void show()
	{
		cout<<"\n calling is ="<<count;
	}
		
};
int student::count=0;
int main()
{
	class student obj1,obj2;
	obj1.get();
	obj1.get();
	obj1.get();
	obj2.student::show();
	
}