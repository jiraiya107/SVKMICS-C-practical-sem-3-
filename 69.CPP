// WAP to show concept of virtual destructor
#include<iostream.h>
#include<conio.h>
class base
{
	public:
	virtual ~base()
	{
		cout<<"base destructor called"<<endl;
	}
};
class derived : public base
{
	public:
	~derived()
	{
		cout<<"derived destructor called"<<endl;
	}
};
int main()
{
	clrscr();
	derived *d=new derived();
	delete d;
	return 0;
}