//call by refrence
#include<iostream>
using namespace std;
void swap(int &x,int &y)   //x=a, y=b
{
int temp;
temp=x; 
x=y;
y=temp;
cout<<"a after swapping="<<x<<endl;
cout<<"b after swapping="<<y<<endl;  	
}
main()
{
int x,y;
cout<<"enter two numbers=";
cin>>x>>y;
cout<<"x before swapping="<<x<<endl;
cout<<"y before swapping="<<y<<endl;
swap(x,y);

	
}