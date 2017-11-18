#include <iostream>
#include <string>
using namespace std;
int main()
{
	char ch[100];
	char* ptr=ch;
	int vow=0,i=0;
	cin.getline(ch,100);
	while(ptr[i]!='\0'){
		if(ptr[i]=='a' || ptr[i]=='e' || ptr[i]=='i'||ptr[i]=='o'||ptr[i]=='u'||ptr[i]=='A' || ptr[i]=='E' || ptr[i]=='I'||ptr[i]=='O'||ptr[i]=='U')
			vow++;
			i++;
	}
		cout<<"Number Of Vowels: "<<vow;
	return 0;
}