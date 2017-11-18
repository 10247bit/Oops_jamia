#include <iostream>
using namespace std;
class bank{
	int count;
public:
	bank():count(0){}
	void operator++(int)
	{
		count++;
	}
	void operator--(int)
	{
		count--;
	}
	void operator++()
	{
		++count;
	}
	void operator--()
	{
		--count;
	}
	void show_count()
	{
		cout<<"\nNumber Of People In Bank: "<<count<<endl;
	}
};
int main()
{
	int a;
	bank bb;
	while(1)
	{
		cout<<"Press 1 to Send person to Bank\nPress 2 to leave the bank\n";
		cin>>a;
		if(a==1)	bb++;
		else if(a==2)	bb--;
		else	cout<<"\nInvalid Choice\n";
		bb.show_count();
	}
	return 0;
}