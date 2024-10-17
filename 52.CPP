//WAP for function overriding
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
	void geta()
	{
	a=10;
	}
	void display()
	{
	cout<<"\n value of a:"<<a;
	}
       };
       class B:public A
       {
       int b;
       public:
       void getb()
       {
       b=12;
       }
       void display()
       {
       cout<<"\n value of b:"<<b;
       }
       };
       void main()
       {
       B t1;
       clrscr();
       t1.geta();
       t1.getb();
       t1.display();
       t1.A::display();
       getch();
       }
