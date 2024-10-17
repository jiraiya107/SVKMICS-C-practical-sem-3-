// WAP to implement a Class Rectangle

#include<iostream.h>
#include<conio.h>
class rectangle
{
	private:
	int l,b;

	public:
	void input()
	{
		l=21;
		b=12;
	}
	void area()
	{
		cout<<"Area: "<<l*b;
	}
};
int main()
{
	rectangle r;
	clrscr();
	r.input();
	r.area();
	return 0;
}