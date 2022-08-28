//classes

#include<iostream>
using namespace std;
class A
{
	public:
	int a;
	float b;
};

int main()
{
	class A obj;
	obj.a=15;
	obj.b=18.2;
	cout<<"a is ="<<obj.a;
	cout<<"\nb is ="<<obj.b;
}