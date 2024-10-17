// WAP to show concept of binary operation overloading
#include<iostream.h>
#include<conio.h>
class binary
{
	private:
	int x,y;
	public:
	binary()
	{
		x=0;
		y=0;
	}
	void getvalue()
	{
		cout<<" enter value for x:";
		cin>>x;
		cout<<" enter value for y:";
		cin>>y;
	}
	void display()
	{
		cout<<"\n\n the result is :\n";
		cout<<" x="<<x<<" y="<<y;
	}
	binary operator +(binary);
};
binary binary :: operator +(binary b2)
{
	binary t;
	t.x=x+b2.x;
	t.y=y+b2.y;
	return (t);
}
void main()
{
	binary b1,b2,b3;
	clrscr();
	cout<<"enter value for object b1:"<<endl;
	b1.getvalue();
	cout<<endl;
	cout<<"enter value for object b2:"<<endl;
	b2.getvalue();
	b3=b1+b2;
	b3.display();
	getch();
}