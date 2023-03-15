#include <iostream>
using namespace std;
void main()
{
	int i(0) ,n, arr[14] = { 4,7,47,74,44,77,444,447,474,477,744,747,774,777 };
	cin >> n;
	bool flag = false;
	while (i < 14 && !flag)
	{
		if (n % arr[i] == 0)
			flag = true;
		i++;
	}
	if (flag)
		cout << "YES";
	else
		cout << "NO";



}