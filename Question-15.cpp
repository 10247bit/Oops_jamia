#include <iostream>
#include <cmath>
using namespace std;

class _2D
{
protected:
	float length,width;
public:
	_2D(float l,float w):length(l),width(w){}

};

class _3D:public _2D
{
	float depth;
public:
	_3D(float l=0,float w=0,float d=0):_2D(l,w),depth(d){}
	void distance(_3D&);
};
void _3D::distance(_3D& point_2)
{
	float xd,yd,zd;
	xd=point_2.length-length;
	yd=point_2.width-width;
	zd=point_2.depth-depth;

	float dist=sqrt(xd*xd+yd*yd+zd*zd);

	cout<<"The Distance between Point-("<<length<<", "<<width<<", "<<depth<<") and Point-("<<point_2.length<<", "<<point_2.width<<", "<<point_2.depth<<") is "<<dist<<endl;
}
int main()
{
	_3D p1(2,3,4),p2(5,6,7);
	p1.distance(p2);
	return 0;
}