// WAP to create class book with array

#include<iostream.h>
#include<conio.h>
class book
{
	private:
	int id;
	char name[20];
	char author[20];
	int price;
	public:
	void input()
	{
		cout<<"Enter ID: ";
		cin>>id;
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter Author: ";
		cin>>author;
		cout<<"Enter Price: ";
		cin>>price;
	}
	void display()
	{
		cout<<"ID: "<<id<<endl;
		cout<<"Name: "<<name<<endl;
		cout<<"Author: "<<author<<endl;
		cout<<"Price: "<<price<<endl;
	}
};
int main()
{
	int i,j;
	book b[3];
	clrscr();
	for(i=0;i<3;i++)
	{
		b[i].input();
	}
	for(j=0;j<3;j++)
	{
		b[j].display();
	}
	return 0;
}