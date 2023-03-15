#include<iostream>
using namespace std;
int main()
{
	long long arr[100000],n,sum(0);
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	cout << abs(sum);

	return 0;
}