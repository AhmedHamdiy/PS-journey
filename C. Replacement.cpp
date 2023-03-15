#include <iostream>
using namespace std;
int main() {
    int n ,arr[1000],i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        if (arr[i] > 0)
            arr[i] = 1;
        else if (arr[i] < 0)
            arr[i] = 2;
        else
            arr[i] = 0;
    }
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
