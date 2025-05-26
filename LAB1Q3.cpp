#include<iostream>
#define pi 3.14
using namespace std;
int main()
{
	cout << "Enter radius of circle"<< endl;
	float r;
	cin >> r;
	cout << "Area of circle is "<< pi*r*r << endl <<"Perimeter of circle is "<< 2*pi*r;
	return 0;
}