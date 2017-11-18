#include <iostream>
#include <string>

using namespace std;

class calculator;

class student
{
private:
	string name;
	float maths,physics,computer;
public:
	student(string n="Ruhi",float a=96.50,float b=89.00,float c=100.00):name(n),maths(a),physics(b),computer(c){}
	void display();
	void get_data();
	friend class calculator;
	//To Calculator is a friend of Square It means Calculator can access the data members/functions of the Square class


};

void student::get_data()
{
	cout<<"\nEnter the name of the student:- ";
	cin>>name;

	cout<<"\nInput the marks of the "<<name<<" in Mathematics,Physics and Computer Science :-\n";
	cin>>maths>>physics>>computer;
}

void student::display()
{
	//cout<<"------------------------------------------------------------------------------\n";
	cout<<"\nThe Report of "<<name<<":\n";
	cout<<"\n------------------------------------------------------------------------------\n";
	cout<<"\nMathematics:-"<<maths<<endl<<"Physics:-"<<physics<<endl<<"Computer Science:-"<<computer<<endl;
	cout<<"\n------------------------------------------------------------------------------\n";
	cout<<"\nOverall Aggregate:- "<<(maths+physics+computer)/3<<endl<<endl;
}

class calculator
{
public:
	
	void marks_avg(student &);
};

void calculator::marks_avg(student &s)
{
	cout<<"\n------------------------------------------------------------------------------\n";
	cout<<"\nThis is calculated using Friend  Class's  menmber function";
	cout<<"\n"<<s.name<<"'s";
	cout<<"\nOverall Aggregate:- "<<(s.maths+s.physics+s.computer)/3;
	cout<<"\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n";
}

int main()
{
	calculator c;
	student one,two;

	two.get_data();

	one.display();
	c.marks_avg(one);

	two.display();
	c.marks_avg(two);

	return 0;

}