#include <iostream>
//using namespace std;

template <class T>
class pair
{
private:
	T container_1,container_2;
public:
	pair(const T &a ,const T &b ):container_1(a),container_2(b){}
	T& get_max();
};
template <class T>
T& pair<T>::get_max()
{
		if(container_1>container_2)
			return container_1;
		else
			return container_2;
};
int main()
{
	pair<int> nump(23,45);
	pair <float> realp(56.78,56.77);
	pair <char> charp('d','t');

	int bigger_i=nump.get_max();
	float bigger_f=realp.get_max();
	char bigger_c=charp.get_max();

	std::cout<<"The bigger integer between 23 and 45 is "<<bigger_i<<std::endl;
	std::cout<<"The bigger real number  between 56.78 and 56.77 is "<<bigger_f<<std::endl;
	std::cout<<"The bigger character between 'd' and 't' is "<<bigger_c<<std::endl;
	return 0;
}