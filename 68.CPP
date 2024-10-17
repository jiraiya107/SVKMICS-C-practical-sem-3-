// WAP to show the concept of virtual functon
#include<iostream.h>
#include<conio.h>
class base
{
	public:
	virtual void display()
	{
		cout<<"base class display"<<endl;
	}
};
class derived : public base
{
	public:
	void display()
	{
		cout<<"derived class display"<<endl;
	}
};
int main()
{
	clrscr();
	base *b;
	derived d;
	b=&d;
	b->display();
	return 0;
}