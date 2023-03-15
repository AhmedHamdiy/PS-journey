#include <iostream>
using namespace std;
void ReversePart(int s1, char arr1[], int s2, char arr2[], int& s)
{
    s = s1 + s2;
    for (int j = 0; j < s2; j++)
        cout << arr2[j];
    for (int i = 0; i < s1; i++)
        cout << arr1[s1 - (i + 1)];
    cout << '\n' << s;

}
int main()
{
    int x, n, size;
    cin >> x;
    if (x < 0)
    {
        cout << "Error";
    }
    else if (x == 0)
    {
        cin >> n;
        if (n == 0)
            cout << "Empty";
    }
    else
    {
        char* arrx = new char[x];
        for (int i = 0; i < x; i++)
            cin >> arrx[i];
        cin >> n;
        if (n < 0)
        {
            cout << "Error";
        }
        else
        {
            char* arrn = new char[n];
            for (int i = 0; i < n; i++)
                cin >> arrn[i];
            ReversePart(x, arrx, n, arrn, size);
            delete[] arrx;
            delete[] arrn;
        }
    }
    return 0;
}