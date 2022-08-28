// friend classes
#include<iostream>
using namespace std;
class test1
{
public:
int a,b;
void get()
{
	cout<<"enter the two numbers is =";
	cin>>a>>b;
	}	
friend class test2;	
};

class test2
{
	public:
		void sum(test1 ob)
		{
			cout<<ob.a+ob.b;
	}
			
		};
int main()

{	class test1 obj1;
	class test2 obj2;
	obj1.get();
	obj2.sum(obj1);
	
}
				
