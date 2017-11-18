#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>

using namespace std;

class contact
{
public:
	string name,email;
	//int email,standard,age;

	friend istream& operator >>(istream&,contact &);
	friend ostream& operator <<(ostream&,contact &); 
	friend ifstream& operator >>(ifstream&,contact &);
	friend ofstream& operator <<(ofstream&,contact &);

};

istream& operator >>(istream& in,contact& s)
{
	cout<<"contact Input:\n";
	cout<<"Name:- ";
	in >> s.name;
	cout<<"Email Address:- ";
	in >> s.email;
	//cout<<"Standard:- ";
	//in >> s.standard;
	//cout<<"Age:- ";
	//in >> s.age;

	return in;
}

ifstream& operator >>(ifstream& infile,contact& s)
{
	
	infile >> s.name;
	//cout<<"email Number:- ";
	infile >> s.email;
	//cout<<"Standard:- ";
	//infile >> s.standard;
	//cout<<"Age:- ";
	//infile >> s.age;

	return infile;
}
ostream& operator <<(ostream& out,contact& s)
{
	//out<<"contact Info:\n";
	out<<"\nEmail Address of "<<s.name<<" is "<<s.email<<endl;
	//out<<"Standard:- "<<s.standard<<endl;
	//out<<"Age:- "<<s.age<<endl;

	return out;
}
ofstream& operator <<(ofstream& outfile,contact& s)
{
	//out<<"contact Info:\n";
	outfile<<s.name<<" ";
	outfile<<s.email<<endl;
	//outfile<<s.standard<<" ";
	//outfile<<s.age<<endl;

	return outfile;
}

void Add()
{

	contact s;
	ofstream outfile;
	outfile.open("Question-17.txt",ios::out|ios::app);

	cin>>s;

	outfile<<s;

	cout<<"Added Succesfully\n";
	outfile.close();

}
void Delete()
{
	contact s;
	string n;
	cout<<"Enter Name to Delete\n";
	cin>>n;

	ifstream infile;
	infile.open("Question-17.txt",ios::in);

	ofstream outfile;
	outfile.open("temp.txt",ios::out);

	while(!infile.eof())
	{
		infile>>s;
		
		if(s.name!=n)
		{
			outfile<<s;	
			//cout<<"Entry Deleted!!\n";
			//cout<<"The Email Address of "<<n<<" is "<<this->email<<endl;		
		}
	}
	cout<<"Entry Deleted!!\n";
	infile.close();
	outfile.close();
	remove("Question-17.txt");
	rename("temp.txt","Question-17.txt");


}
void Search()
{
	contact s;
	string n;
	cout<<"Enter Name to Search\n";
	cin>>n;

	ifstream infile;
	infile.open("Question-17.txt",ios::in);
	while(!infile.eof())
	{
		infile>>s;	
		if(s.name==n)
		{	
			cout<<"Found it!!\n";
			cout<<s;
			break;		
		}

	}
	cout<<"\nNot in the Records\n";
	infile.close();

}

void Display()
{
	contact s;
	ifstream infile;
	infile.open("Question-17.txt",ios::in);
	while(infile>>s)
	{
			
		cout<<s;
	}
	infile.close();

}
int main()
{
	int o=1;
	while(o!=5)
	{
		cout<<"Choose from the Menu:\n";
		cout<<"1.)Add\n2.)Search\n3.)Delete\n4.)Display\n5.)Exit\n";
		cin>>o;

		switch(o)
		{
			case 1:
					Add();
					break;
			case 2:
					Search();
					break;
			case 3:
					Delete();
					break;
			case 4:
					Display();
					break;
			default:
					o=5;
					break;
		}
	}
	return 0;
}