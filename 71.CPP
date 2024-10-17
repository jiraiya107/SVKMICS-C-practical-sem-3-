//WAP volume radius
#include<iostream.h>
#include<conio.h>
int main() {
	clrscr();
    double radius;
    const double PI = 3.14159265359;

    cout << "Enter the radius of the sphere:";
    cin >> radius;
    double circumference = 2 * PI * radius;
    double volume = (4.0 / 3.0)*PI*(radius,3);

    cout << "Circumference: " << circumference << endl;
    cout << "Volume: " << volume << endl;

    return 0;
}