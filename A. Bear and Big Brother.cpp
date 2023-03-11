#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{

	short b, l,yrs(0);
	cin >> l >> b;
	while (l <= b)
	{
		l *=3;
		b *= 2;
		yrs++;
	}
	cout << yrs;
	return 0;
}