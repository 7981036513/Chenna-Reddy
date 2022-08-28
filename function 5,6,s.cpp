
#include<iostream>
using namespace std;
int add(int a,int b)
{
	int s;
	s=a+b;
	return s;
}
	

int mul(int a,int b)   //fn definition
{
int m;
m=a*b;
return m;
}
main()
{
int a,b,s,m;
cin>>a>>b;
s=add(a,b);   //5,6
m=mul(a,b);  //fn calling  //odd(5,6)
cout<<m;

	
}

