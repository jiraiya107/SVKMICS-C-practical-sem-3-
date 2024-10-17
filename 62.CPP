//WAP ++ operator overloading
#include<iostream.h>
#include<conio.h>
class increment
{
	public:
	int data;
	increment()
	{
	 data=1;
	 }
	 void display()
	 {
	 cout<<"value of data="<<data<<endl;
	 }
	 void operator++()
	 {
		++data;
		}
		};
		void main()
		{
		increment ob1,ob2;
		clrscr();
		ob1.display();
		ob2.display();
		cout<<"after operator overlooding operation"<<endl;
		++ob1;
		++ob2;
		ob1.display();
		ob2.display();
		getch();
		}

