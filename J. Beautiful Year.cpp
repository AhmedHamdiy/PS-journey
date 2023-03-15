#include <iostream>
using namespace std;
void main()
{
	int y,cntr(0);
	int arr[4536] = { 0 };
	for (int i = 1; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j != i)
			{
				for (int k = 0; k < 10; k++)
				{
					if (k != j && k != i)
					{
						for (int l = 0; l < 10; l++)
						{
							if (l != i && l != j && l != k)
							{
								arr[cntr] += (1000 * i) + (100 * j)+(10*k)+ l;
								cntr++;
							}
						}
					}
				}
			}
		}
	}
	cin >> y;
	int m(0);
	bool flag= false;
	while (m < 4536 && !flag)
	{
		if (y < arr[m])
		{
			cout << arr[m];
			flag = true;
		}
			m++;
	}
}