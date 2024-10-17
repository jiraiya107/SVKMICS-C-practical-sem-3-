//writ a c++ programme to copy consrasan//
#include<iostream.h>
#include<conio.h>
class code
{
	int id;
	public:
	code()
	{
		id=0;
	}
	code(int a)
	{
		id=a;
	}
	code(code & x)
	{
		id=x.id;
	}
	void display()
	{
		cout<<id;
	}
};
	void main()
	{
		clrscr();
		code a(100);
		code b(a);
		code c=a;
		code d;
		d=a;
		cout<<"\n id of a:-",a.display();
		cout<<"\n id of b:-",b.display();
		cout <<"\n id of c:-",c.display();
		cout<<"\n id of d:-",d.display();
		getch();
}