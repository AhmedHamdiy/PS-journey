#include <iostream>
using namespace std;
void main()
{
	int k, a[12], cntr(0);
	cin >> k;
	for (int i(0); i < 12; i++)
	{
		cin >> a[i];
	}
	for (int i(0); i < 12; i++)
	{
		for (int j(1); j < 12; j++)
		{
			if (a[i] <= a[j])
				swap(a[i], a[j]);
		}
	}
	if (k == 0)
		cout << "0";
	else
	{ 
		while (k >0)
		{
			int i(0);
			k -= a[i];
			cntr++;
			i++;
		}
		cout << cntr;
	}
}