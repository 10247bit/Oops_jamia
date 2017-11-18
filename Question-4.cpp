#include <iostream>
using namespace std;
class empty{
	static int active,deactive;
public:
	empty()
	{
		active++;
	}
	~empty()
	{
		deactive++;
	}
	static void status()
	{
		cout<<"Active Objects: "<<active<<endl;
		cout<<"Destroyed Objects: "<<deactive<<endl<<endl;
	}
};
int empty::active=0;
int empty::deactive=0;
int main()
{
	empty e[10];
	empty::status();
	if(1)
	{
		empty e1[20];
		empty::status();
	}
	empty::status();
	return 0;
}