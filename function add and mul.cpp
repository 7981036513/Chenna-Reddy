// call by value
//swap two numbers
#include<iostream>
using namespace std;
void swap(int a,int b)
{
int temp;
temp=a; 
a=b;
b=temp;
cout<<"a after swapping="<<a<<end1;
cout<<"b after swapping="<<b<<end1;  	
}
main()
{
int a,b;
cout<<"enter two numbers=";
cin>>a>>b;
swap(a,b);
	
}