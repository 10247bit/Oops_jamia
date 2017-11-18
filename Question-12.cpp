#include <iostream>
using namespace std;

template <typename arg>
arg & minimum(arg &a,arg &b)
{
	if(a>b)
		return b;
	else
		return a;
}

int main()
{
	int number1,number2,smaller_i;
	float fnumber1,fnumber2,smaller_f;
	char character1,character2,smaller_c;

	cout<<"Input INTEGERS:-\n";
	cin>>number1>>number2;

	smaller_i=minimum(number1,number2);
	cout<<"The smaller number is "<<smaller_i<<endl;

	cout<<"Input Real Numbers:-\n";
	cin>>fnumber1>>fnumber2;

	smaller_f=minimum(fnumber1,fnumber2);
	cout<<"The smaller real number is "<<smaller_f<<endl;

	cout<<"Input CHARACTERS:-\n";
	cin>>character1>>character2;

	smaller_c=minimum(character1,character2);
	cout<<"The smaller number is "<<smaller_c<<endl;
	return 0;
}