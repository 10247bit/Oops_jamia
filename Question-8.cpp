#include <iostream>
using namespace std;
class complex{
	int real,img;
public:
	complex(){}
	complex(int r,int comp):real(r),img(comp){}
	void show()
	{
		cout<<real<<" + i"<<img;
	}
	complex operator+(complex c)
	{
		complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
	}
	complex operator-(complex c)
	{
		complex temp;
		temp.real=real-c.real;
		temp.img=img-c.img;
		return temp;
	}
};
int main()
{
	complex c1(10,33);
	c1.show();cout<<endl;
	complex c2(19,17);
	c2.show();cout<<endl;
	complex temp;
	temp=c1+c2;
	cout<<"Addition of ";c1.show();cout<<" and ";c2.show();cout<<endl;
	temp.show();cout<<endl;
	temp=c1-c2;
	cout<<"Subtraction of ";c1.show();cout<<" and ";c2.show();cout<<endl;
	temp.show();cout<<endl;
}