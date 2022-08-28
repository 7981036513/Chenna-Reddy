//create class with name; student, take the value of roll no and name
//from the user and print those value using number function
#include<iostream>
using namespace std;
class student	
{
	public:
		int rollno;
		char name[15];
		int Smarks;
		float Mmarks;
		int Emarks;
		
		void input()
		{
			cout<<"enter the roll no, name,Smarks,Mmarks,Emarks is=";
			cin>>rollno>>name>>Smarks>>Mmarks>>Emarks;
		}
		void output()
		{
			cout<<"\n rollno is ="<<rollno;
			cout<<"\n name is ="<<name;
			int sum = Smarks+Mmarks+Emarks;
			 cout<<"\n sum is ="<<sum;
			 int avg=sum/3;
			 cout<<"|n avg is ="<<avg;
		}
};

int main()
{
	class student obj;
	obj.input();
	obj.output();
	obj.Smarks;
	obj.Mmarks;
	obj.Emarks;
}