//find out the area of circle using frd function
#include<iostream>
using namespace std;
class area
{
	int r;
	float pi;
	public:
		void input()
		{
			cout<<"enter the value of radius";
			cin>>r;
		}
		friend void aoc(area ob);
	};
	void aoc (area ob)
	{
		ob.pi=3.14;
		ob.r=15;
		cout<<"area of circle is ="<<ob.pi*ob.r*ob.r;
	}
	int main()
	{
		class area obj;
		obj.input();
		aoc(obj);
	}
	
	
