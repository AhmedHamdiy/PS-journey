#include<iostream>
#include <string>
using namespace std;
string q1 = "qwertyuiopasdfghjkl;zxcvbnm,./ ";
string ShiftRight(string &s)
{
	int idx;
	for (int i = 0; i < s.length(); i++)
	{
		idx = q1.find_first_of(s[i]);
		s[i] = q1[idx - 1];
	}
	return s;
}

string ShiftLeft(string &s)
{
	int idx;
	for (int i = 0; i < s.length(); i++)
	{
		idx = q1.find_first_of(s[i]);
		s[i] = q1[idx + 1];
	}
	return s;
}

int main()
{
	char c;
	string s;
	cin >> c >> s;
	if (c == 'R')
		cout << ShiftRight(s);
	else
		cout << ShiftLeft(s);
	return 0;
}