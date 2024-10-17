// WAP to show concept of destructor
#include<iostream.h>
#include<conio.h>
class destruct
{
	public:
	destruct()
	{
		cout<<"constructor called "<<endl;
	}
	~destruct()
	{
		cout<<"destructor called "<<endl;
	}
};
int main()
{
	clrscr();
	destruct des;
	return 0;
}