// WAP to print colors according to Number

#include<iostream.h>
#include<conio.h>
int main()
{
	int s;
	clrscr();
	cout<<"Enter Your Choice: ";
	cin>>s;
	switch(s)
	{
		case 1:
		cout<<"Blue";
		break;

		case 2:
		cout<<"Black";
		break;

		case 3:
		cout<<"Red";
		break;

		case 4:
		cout<<"Green";
		break;

		case 5:
		cout<<"White";
		break;

		case 6:
		cout<<"Yellow";
		break;

		case 7:
		cout<<"Purple";
		break;

		default:
		cout<<"Invalid Input ";
	}
	return 0;
}