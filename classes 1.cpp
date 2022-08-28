//create class with name; student, take the value of roll no and name
//from the user and print those value using number function
#include<iostream>
using namespace std;
class student	
{
	public:
		int rollno;
		char name[15];
		
		void input()
		{
			cout<<"enter the roll no and name=";
			cin>>rollno>>name;
		}
		void output()
		{
			cout<<"\n rollno is ="<<rollno;
			cout<<"\n name is ="<<name;
		}
};

int main()
{
	class student obj;
	obj.input();
	obj.output();
}