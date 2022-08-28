// pointers
#include<iostream>
using namespace std;
main()
{
	int a=10;
	cout<<a<<endl;   //10
	
	int*p;
	p=&a;
	cout<<p<<endl;  //adress of a
	cout<<*p<<endl;   //value at that adress
	
	
	int **p1;
	p1=&p;
	cout<<p1;   //adress of p
}