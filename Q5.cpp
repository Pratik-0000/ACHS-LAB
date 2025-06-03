#include<iostream>
using namespace std;
int main()
{
	int a,c,d;
	float sum,b;
	cout << "Enter a integer value " << endl;
	cin >> a;
	cout << "Enter a Floating point value" << endl;
	cin >> b;
	sum = a+b;
	c=sum;
	d = static_cast<int>(sum);
	cout << "sum is "<< sum << endl;
	cout << "sum using assign operator "<< c << endl;
	cout << "sum using static_cast "<< d << endl;
	return 0;
}
