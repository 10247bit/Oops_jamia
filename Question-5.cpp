#include <iostream>
#include <string>
using namespace std;
class pntr_obj{
	int rno;
	string name;
public:
	void set_data()
	{
		cout<<"Enter Details\n";
		cout<<"Enter Last Name: ";
		cin>>name;
		cout<<"Enter Roll Number: ";
		cin>>rno;
	}
	void print()
	{
		cout<<"\nShow Details\n";
		cout<<"\nName: "<<this->name;
		cout<<endl<<"Roll Number: "<<this->rno<<endl;
	}

};

int main()
{
	pntr_obj p1;
	p1.set_data();
	p1.print();
	return 0;

}