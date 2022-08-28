// outside class defination 

#include<iostream>
using namespace std;
class car
{
	public:
char carname[50];
int price;
int carno;
void input();
void output();
};

// scope resolution operator::

void car::input()
{
	cout<<"enter the car name,price,carno =";
	cin>>carname>>price>>carno;
}
void car::output()
{
	cout<<"\ncarname is ="<<carname;
	cout<<"\nprice is ="<<price;
	cout<<"\ncarno is ="<<carno;
}
int main()
{
	class car obj;
	obj.input();
	obj.output();
}
	
				
	 