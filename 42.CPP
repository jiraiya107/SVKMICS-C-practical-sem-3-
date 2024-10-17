// WAP to create class to check number is prime or not

#include<iostream.h>
#include<conio.h>
class prime
{
	private:
	int i,n,count;
	public:
	void getdata()
	{
		cout<<"Enter Value Of N: ";
		cin>>n;
	}
	void check()
	{
		count=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				count=count+1;
			}
		}
		if(count==2)
		{
			cout<<n<<" is prime";
		}
		else
		{
			cout<<n<<" is not prime";
		}
	}
};
int main()
{
	clrscr();
	prime p;
	p.getdata();
	p.check();
	return 0;
}