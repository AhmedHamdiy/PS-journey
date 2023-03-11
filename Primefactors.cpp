#include <iostream>
#include<string>
using namespace std;

void Primefactors(long long n) {
	long long cntr = 2;
	long long i = 0;
	string s;
	s[0] = '5';
	while (cntr <= n)
	{
		bool flag = false;
		int pow = 0;
		while (n % cntr == 0)
		{
			n /= cntr;
			pow++;
			flag = true;
		}
		if (flag)
		{
			string a = "(";
				a += to_string(cntr);
				a += '^';
				a += to_string(pow);
				a += ')';
				a+='*';
			s +=a ;
		}
		cntr++;
	}
	for (int i = 1; i < s.length() - 1; i++)
		cout << s[i];
}

int main()
{
	long long n;
	cin >> n ;
	Primefactors(n);
	return 0;
}