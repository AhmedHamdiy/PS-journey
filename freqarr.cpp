#include <iostream>
#include<vector>
using namespace std;
void countFreq1(int arr[], int n)
{
    // Mark all array elements as not visited
    vector<bool> visited(n, false);

    // Traverse through array elements and
    // count frequencies
    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
void freq2(int arr[],int n,int freq[]) {
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 1; i <= n; i++)
        cout << "A[" << i << ']' << " = " << freq[i] << endl;
}
int main() {
    int n, arr[1000], max(-100000), freq[1000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    return 0;
}
