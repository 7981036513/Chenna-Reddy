// friend classes
N
class A
{
public:
int a,b;
void get()
{
	cout<<"enter the two numbers is =";
	cin>>a>>b;
	}	
friend class B;	
};

class B
{
	public:
		void sum(A ob)
		{
			cout<<ob.a+ob.b;
	}
			
		};
int main()

{	class A obj1;
	class B obj2;
	obj1.get();
	obj2.sum(obj1);
	
}
				
