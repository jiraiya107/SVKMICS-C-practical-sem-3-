// inline function//
#include<iostream.h>
#include<conio.h>
inline void add(int x,int y);
inline void add(int x,int y)
{
	cout<<"Addition is="<<x+y;
}
int main()
{
	clrscr();
	add(6,8);
	return 0;
}