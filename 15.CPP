//arethmetic opreion
#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b,c,n;
	clrscr();
	cout<<"Enter value of A:";cin>>a;
	cout<<"Enter value of B:";cin>>b;
	cout<<"1.Addtion"<<endl<<"2.Sub"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"5.Remainder"<<endl<<endl;
	cout<<"Enter your choice:";cin>>n;
	switch(n)
	{
	case 1:
	c=a+b;
	cout<<"Addition:"<<c;
	break;

	case 2:
	c=a-b;
	cout<<"Subtraction:"<<c;
	break;

	case 3:
	c=a*b;
	cout<<"Multiplication:"<<c;
	break;

	case 4:
	c=a/b;
	cout<<"Division:"<<c;
	break;

	case 5:
	c=a%b;
	cout<<"Remainder:"<<c;
	break;
	}
	return 0;
}