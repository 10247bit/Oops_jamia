#include <iostream>
using namespace std;

class friendfunc2;

class friendfunc1
{
private:
	float number1,number2;
public:
	friendfunc1(float a=0.97,float b=0.03):number1(a),number2(b){}
	void show_data();
	friend void calculate_avg(friendfunc1 &,friendfunc2 &);

};


void friendfunc1::show_data()
{
	cout<<"The numbers from the friendfunc2 class are :- |"<<number1<<" -||- "<<number2<<"|"<<endl;

}

class friendfunc2
{
private:
	float number1,number2,number3;
public:
	friendfunc2(float a=0.16,float b=0.12,float c=0.1996):number1(a),number2(b),number3(c){}
	void show_data();
	friend void calculate_avg(friendfunc1 &,friendfunc2 &);


};


void friendfunc2::show_data()
{
	cout<<"The numbers from the friendfunc2 class are :- "<<number1<<" -||- "<<number2<<" -||- "<<number3<<endl;

}

void calculate_avg(friendfunc1 & ob1,friendfunc2 &ob2)
{
	float avg=(ob1.number1+ob1.number2+ob2.number1+ob2.number2+ob2.number3)/5;
	cout<<"The average of the data members :- |"<<ob1.number1<<"| , |"<<ob1.number2<<"| , |"<<ob2.number1<<"| , |"<<ob2.number2<<"| , |"<<ob2.number3<<"| is |"<<avg<<"|"<<endl;

}

int main()
{
	friendfunc1 crip,test1(2.4,67.8);
	friendfunc2 crip2,test2(23.4,67.3,89.5);

	crip.show_data();
	crip2.show_data();

	calculate_avg(crip,crip2);
	
	test1.show_data();
	test2.show_data();

	calculate_avg(test1,test2);

	return 0;
}