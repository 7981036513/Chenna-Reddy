//static data members
#include<iostream>
using namespace std;
class A
{
	public:
	static int a;
	static void sum()
	
	
		
	
		{
			a++;
			cout<<a<<endl;
		}
};
int A::a=5;
int main()
{
	class A obj1,obj2,obj3;
	obj1.A::sum();
	obj2.A::sum();
	obj3.A::sum();
	
}