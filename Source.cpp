#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s;
	long long n, a(0), d(0);
	cin >> n;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'D')
			d++;
		else
			a++;
	}
	if (a > d)
		cout << "Anton";
	else if (a < d)
		cout << "Danik";
	else
		cout << "Friendship";
	return 0;
}