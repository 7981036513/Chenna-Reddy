    //create class car input data 

#include<iostream>
using namespace std;
class car
{
	public:
char carname[50];
int price;
int carno;

void input()
{
	cout<<"enter the carname,price,carno =";
	cin>>carname>>price>>carno;
}
void output()
{

cout<<"carname is ="<<carname;
cout<<"price is ="<<price;
cout<<"carno is ="<<carno;
}
};

int main()
{
	class car obj;
	obj.input();
	obj.output();
}
	
				
	 