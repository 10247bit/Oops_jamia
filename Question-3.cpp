#include <iostream>
using namespace std;

inline int add(int a,int b)
{
	return a+b;
}
inline int subtract(int a,int b)
{
	return a-b;
}
inline int multiply(int a,int b)
{
	return a*b;
}
inline float divide(float a,float b)
{
	return float (a/b);
}
int main()
{
	int a,b;
	cout<<"Enter Numbers a & b : ";
	cin>>a>>b;
	cout<<"Addition \t"<<add(a,b)<<endl;
	cout<<"Subtract \t"<<subtract(a,b)<<endl;
	cout<<"Multiply \t"<<multiply(a,b)<<endl;
	cout<<"Divide \t\t"<<divide(a,b)<<endl;
	return 0;
}