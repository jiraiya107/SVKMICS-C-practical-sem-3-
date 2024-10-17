//find max number from n values
#include<iostream.h>
#include<conio.h>
int main()
{
	int i,n[10],max=0;
	clrscr();
	cout<<"enter 10 number:";
	for(i=0;i<10;i++)
	{
		cin>>n[i];
		if(n[i]>max)
		{
			max=n[i];
		}
	}
	cout<<"maximum nuber:"<<max;
	return 0;
}
