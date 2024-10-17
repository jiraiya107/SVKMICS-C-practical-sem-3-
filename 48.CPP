// WAP: To show use of switch with char case
#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	char ch;
	cout<<"enter a character :";
	cin>>ch;
	switch(ch)
	{
		case 'a':
		case 'A':
		cout<<"you entered 'a' or 'A'."<<endl;
		break;
		case 'b':
		case 'B':
		cout<<"you entered 'b' or 'B'."<<endl;
		break;
		case 'c':
		case 'C':
		cout<<"you entered 'c' or 'C'."<<endl;
		break;
		default:
		cout<<" you entered a different character."<<endl;
	}
	return 0;
};
