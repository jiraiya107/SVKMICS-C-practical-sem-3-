//WAP scope resolution operator
#include<iostream.h>
#include<conio.h> 

int x; 

int main()
{
clrscr();
int x = 10; 
cout << "Value of global x is " << ::x;
cout << "\nValue of local x is " << x; 
return 0;
}