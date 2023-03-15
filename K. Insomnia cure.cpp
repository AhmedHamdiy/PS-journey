#include <iostream>
using namespace std;
void main()
{
	int  k, l, m, n, d, cntr(0);
	cin>> k>> l>> m>> n>> d;
	for (int i = 1; i <= d; i++)
		if (i % k == 0)
			cntr++;
		else
		{
			if (i % l == 0)
				cntr++;
			else
			{
				if (i % m == 0)
					cntr++;
				else
				{
					if (i % n == 0)
						cntr++;
				}
			}
		}
	cout << cntr;
}