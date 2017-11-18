#include <iostream>
#include <string>

using namespace std;

class student
{
private:
	string name;
	int roll,standard,age;
public:
	friend istream& operator >>(istream&,student &);
	friend ostream& operator <<(ostream&,student &); 

};

istream& operator >>(istream& in,student& s)
{
	cout<<"Student Input:\n";
	cout<<"Name:- ";
	in >> s.name;
	cout<<"Roll Number:- ";
	in >> s.roll;
	cout<<"Standard:- ";
	in >> s.standard;
	cout<<"Age:- ";
	in >> s.age;

	return in;
}

ostream& operator <<(ostream& out,student& s)
{
	out<<"Student Info:\n";
	out<<"Name:- "<<s.name<<endl;
	out<<"Roll Number:- "<<s.roll<<endl;
	out<<"Standard:- "<<s.standard<<endl;
	out<<"Age:- "<<s.age<<endl;

	return out;
}
int main()
{
	student s1;
	cin>>s1;
	cout<<"xXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXx"<<endl;
	cout<<s1;
	return 0;
}