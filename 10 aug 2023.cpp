      //find out the reverse of an number
#include<iostream>
int main()
{
	int n,x=0,rem;
	std::cout<<"enter the value of n=";
	std::cin>>n;
	int temp=n;
	while(n!=0)
	{
		rem=n%10;
		x=x*10+rem;
		n=n/10;
	}std::cout<<"reverse is="<<x;
	
	if(temp==x)
	std::cout<<"yes it is a polindrome";
	else
	std::cout<<"not polindrome";
}