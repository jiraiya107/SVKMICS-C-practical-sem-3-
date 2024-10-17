//WAP unary ++ operator overloading
#include<iostream.h>
#include<conio.h>
class decrement
{
	public:
	int data;
	decrement()
	{
	data=1;
	}
	void display()
	{
	cout<<"value of data="<<data<<endl;
	}
	void operator--()
	{
	   --data;
	   }
	};
	void main()
	{
		decrement ob1,ob2;
		clrscr();
		ob1.display();
		ob2.display();
		cout<<"after oprator over loadin operation"<<endl;
		--ob1;
		--ob2;
		ob1.display();
		ob2.display();
		getch();
		}


