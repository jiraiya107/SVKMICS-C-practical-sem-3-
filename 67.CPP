// WAP to create pure virtual function
#include<iostream.h>
#include<conio.h>
class base
{
	public:
	virtual void show()=0;
};
class derv1:public base
{
	public:
	void show()
	{
		cout<<"I am derv1 class"<<endl;
	}
};
class derv2:public base
{
	public:
	void show()
	{
		cout<<"I am derv2 class"<<endl;
	}
};
void main()
{
	clrscr();
	derv1 d1;
	derv2 d2;
	base *b;
	b=&d1;
	b->show();
	b=&d2;
	b->show();
	getch();
}
