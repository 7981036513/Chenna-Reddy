//friend function
//sum of two numbers
#include<iostream>
using namespace std;
class A
{
	int a;
	int b;
public:
friend void add(A ob);  //prototype
};
void add(A ob)
{
	ob.a=676;
	ob.b=8978;
	cout<<"sum is ="<<ob.a+ob.b;
	}	
int main()
{
	class A obj;
	add (obj);
	}	
