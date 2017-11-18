#include <iostream>
using namespace std;
void rev(int& a);
int rev_return(int a);
int main()
{
	int num=0;
	cout<<"Enter Number: ";
	cin>>num;
	cout<<"Using Function with Return Value: "<<rev_return(num);
	rev(num);
	cout<<endl<<"Using Function with no return value: "<<num;
}
void rev(int& a)
{
	int temp=0;
	while(a>0)
	{
		temp*=10;
		temp+=a%10;
		a/=10;
	}
	a=temp;
}

int rev_return(int a)
{
	int temp=0;
	while(a>0)
	{
		temp*=10;
		temp+=a%10;
		a/=10;
	}
	return temp;
}