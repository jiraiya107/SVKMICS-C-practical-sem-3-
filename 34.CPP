// WAP to create a class Student With 2 Objects

#include<iostream.h>
#include<conio.h>
class std
{
	private:
	int id;
	char name[50];

	public:
	void input()
	{
		cout<<"Id: ";
		cin>>id;
		cout<<"Name: ";
		cin>>name;
		cout<<endl;
	}
	void putdata()
	{
		cout<<"ID: "<<id<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<endl;
	}

};
int main()
{
	clrscr();
	std s1,s2;
	s1.input();
	s2.input();
	s1.putdata();
	s2.putdata();
	return 0;
}