#include <iostream>
using namespace std;
class c_polygon
{
protected:
	float x,y;
public:
	c_polygon(float a,float b):x(a),y(b){}
	virtual void area()=0;
};
class c_rectangle:public c_polygon{
public:
	c_rectangle(float a,float b):c_polygon(a,b){}
	void area()
	{
		cout<<"Area With Sides "<<x<<" and "<<y;
		cout<<"is: "<<x*y<<endl<<endl;
	}
};
class c_triangle:public c_polygon{
public:
	c_triangle(float h,float b):c_polygon(h,b){}
	void area()
	{
		cout<<"Area Of Triangle with Height "<<x<<"and breadth "<<y<<" is:  "<<0.5*x*y<<endl;
	}
};
int main()
{
	cout<<endl;
	c_rectangle r(10,20);
	c_triangle t(12,45);
	r.area();
	t.area();
	return 0;
}