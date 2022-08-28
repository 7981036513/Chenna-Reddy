//pointer arithemetic
#include<iostream>
using namespace std;
main()
{
	int a=10;
	int *p;
	p=&a;
	cout<<"adress of a="<<p<<endl;
	
	p=p+4;
	cout<<"updated adress= "<<p<<endl;
	cout<<"value at updated adress= "<<*p<<endl;     //garbage value
	
	
	*p=20;
	cout<<"value= "<<*p;   //20
	
}