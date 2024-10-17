//writwe a c++ programe for the um of digit:
#include<iostream.h>
#include<conio.h>
int main()
{
	int i,sum=0;
	clrscr();
	for(i=1;i<=10;i+1)
       {
       sum=sum+i;
       cout<<i;
       }
       cout<<endl;
       cout<<"sum="<<sum;
       return 0;
}