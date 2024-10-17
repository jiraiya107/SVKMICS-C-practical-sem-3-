//WAP friend function
#include <iostream.h>
#include<conio.h>
class Box    
{    
    private:    
        int length;    
    public:    
        Box(): length(0) { }    
	friend int printLength(Box);
};    
int printLength(Box b)    
{    
   b.length += 10;    
    return b.length;    
}    
int main()    
{    
    Box b;    
    cout<<"Length of box: "<< printLength(b)<<endl;    
    return 0;    
}    