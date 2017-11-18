#include <iostream>
using namespace std;
class matrix{
	int **mat;
	int r,c;
public:
	matrix(){}
	matrix(int rows,int cols){
		r=rows;
		c=cols;
		mat=new int*[c];
		for(int i=0;i<c;i++)
			mat[i]=new int[r];
	}
	matrix operator+(const matrix t)
	{
		matrix temp(r,c);
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				temp.mat[i][j]=mat[i][j]+t.mat[i][j];
		temp.r=r;
		temp.c=c;
		return temp;
	}
	matrix operator-(matrix t)
	{
		matrix temp;
		for(int i=0;i<r;i++)
			for(int j=0;j<c;j++)
				temp.mat[i][j]=mat[i][j]-t.mat[i][j];
		temp.r=r;
		temp.c=c;
		return temp;
	
	}
	void show()
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				cout<<mat[i][j]<<"\t";
			cout<<endl;
		}
	}
	void enter()
	{
		for(int i=0;i<r;i++)
		{
			for(int j=0;j<c;j++)
				cin>>mat[i][j];
		}	
	}
};
int main()
{
	matrix m1(3,3);
	m1.enter();
	matrix m2(3,3);
	m2.enter();
	matrix temp;
	temp=m1+m2;
	cout<<"\nAddition\n";
	temp.show();
	cout<<"Subtraction\n";
	temp=m1-m2;
	temp.show();
	return 0;
}