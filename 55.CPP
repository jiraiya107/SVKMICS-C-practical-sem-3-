//WAP to virtual base class
#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	int roll;
	public:
	   void get_roll()
	   {
	     cout<<"enter the roll no:";
	     cin>>roll;
	     }

	  void put_roll()
	  {
	    cout<<"\n roll"<<roll;
	   }
	 };
	 class test:virtual public student
	 {
	   protected:
	   int sub1,sub2;
	   public:
	   void get_marks()
	   {
	     cout<<"enter mark of subject1:";
	     cin>>sub1;
	     cout<<"enter mark of subject2:";
	     cin>>sub2;
	     }
	   void disp_marks()
	   {
		  cout<<"\n marks of sub1:"<<sub1;
		  cout<<"\n marks of sub2:"<<sub2;
	   }
	 };
	 class sports:virtual public student
	 {
		protected:
		int score;
		public:
		void get_score()
		{
		  cout<<"enter the score";
		  cin>>score;
		  }
	       void put_score()
	       {
		  cout<<"\n score "<<score<<endl;
		  }
	      };
	      class result:public test,public sports
	      {
		protected:
		int total;
		public:
		void display()
		{
		total=sub1+sub2;
		put_roll();
		disp_marks();
		put_score();
		cout<<"Total marks:"<<total<<endl;
		}
	     };
	     void main()
	     {
	       result r;
	       clrscr();
	       r.get_roll();
	       r.get_marks();
	       r.get_score();
	       r.display();
	       getch();
	       }
