//reference variable
#include<iostream>
using namespace std;
main()
{
int a=10;
cout<<a;    //10

int &y=a; //alias name
cout<<y; ///10

y=20;
cout<<a; //20
}
