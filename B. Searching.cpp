
#include <iostream>
using namespace std;
int main() {
	int cntr(0),n,i;
	long long arr[100000],x;
	cin >> n;
	for ( i = 0; i < n; i++)
		cin >> arr[i];
	cin >> x;

	for ( i = 0; i < n; i++)
		if (x == arr[i])
		{
			cntr++;
			break;
		}
	if (cntr)
	{

		cout << i;

	}
	else
		cout << -1;
	return 0;
}


