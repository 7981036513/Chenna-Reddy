//types of pointer
//wild pointer
#include<iostream>
using namespace std;
main()
{
	int *p;
	cout<<p;     //garbage adress--->wild pointer
	
	int a=10;
	p=&a;  //valid pointer
}