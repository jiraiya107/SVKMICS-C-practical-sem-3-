// WAP to implement sing inheritence using public derivation

#include<iostream.h>
#include<conio.h>
class B
{
	int a;
	public:
		int b;
		void getab();
		int geta();
		void showa();
};
class D : public B
{
	int c;
	public:
		void mul();
		void display();
};
void B :: getab()
{
	a=15;
	b=20;
}
int B :: geta()
{
	return a;
}
void B :: showa()
{
	cout<<"a is "<<a<<endl;
}
void D :: mul()
{
	c=b*geta();
}
void D :: display()
{
	cout<<"a is "<<geta()<<endl;
	cout<<"b= "<<b<<endl;
	cout<<"c= "<<c<<endl;
}
int main()
{
	D d;
	clrscr();
	d.getab();
	d.mul();
	d.showa();
	d.display();
	return 0;
}