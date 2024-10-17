//WAP for base class and derived class
#include<iostream.h>
#include<conio.h>
class base
{
	public:
	int a;
};
class derived : public base
{
	public:
	int b;
};
int main()
{
	clrscr();
	derived d;
	d.b =3;
	d.a =4;
	cout<<"value from derived class:"<<d.b<<endl;
	cout<<"value from base class :"<<d.a<<endl;
	return 0;
}
