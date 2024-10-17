// WAP : Constructer Overloading

#include<iostream.h>
#include<conio.h>
class exam
{
	private:
	int a,b;

	public:
	exam()
	{
		a=10;
		b=20;
	}
	exam(int a1)
	{
		a=a1;
		b=30;
	}
	exam(int a1,int b1)
	{
		a=a1;
		b=b1;
	}
	void display()
	{
		cout<<"A="<<a;
		cout<<"B="<<b;
	}
};
int main()
{
	clrscr();
	exam e1;
	exam e2(40);
	exam e3(50,60);
	e1.display();
	e2.display();
	e3.display();
	return 0;
}