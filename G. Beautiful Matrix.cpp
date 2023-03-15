#include <iostream>
using namespace std;
void main()
{
	int arr[5],cntr(0);
	for (int j = 0; j < 5; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			cin >> arr[i];
			if (arr[i] == 1)
				cntr += ((abs(2 - i)) + abs(2-j));
		}
	}
	cout<<cntr;
}
