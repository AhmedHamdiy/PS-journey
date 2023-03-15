#include<iostream>
using namespace std;
void main()
{
	int s1, s2, a1, a2, a3, b1, b2, b3, n, cntr(0);
	cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
	s1 = a1 + a2 + a3;
	s2 = b1 + b2 + b3;
	cntr += s1 / 5;
	cntr += s2 / 10;
	if (s1 % 5 != 0)
		cntr++;
	if (s2 % 10 != 0)
		cntr++;
	if (cntr <= n)
		cout << "YES";
	else
		cout << "NO";
}