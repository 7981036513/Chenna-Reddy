#include<iostream>
using namespace std;
class employee
{
	public:
		char employeename;
		int employeeno;
		int salary;
		void input();
		void output();
};
void employee::input()
{
	cout<<"\n employeename,employeeno and salary ";
	cin>>employeename>>employeeno>>salary;
}
void employee:: output()
{
	cout<<"\n employeename is"<<employeename;
	cout<<"\n employeeno is"<<employeeno;
	cout<<"\n salary is"<<salary;
}
int main()
{
class employee obj;
obj.input();
obj.output();
	
}