#include <iostream>
using namespace std;

void Generate_Multiples_Sequence(int z, int q, int a[], int s)
{
    int i(0);
    do
    {
        a[i] = i * z;
        i++;
    } while (i * z <= q);
    for (int j = 0; j < s; j++)
        cout << a[j] << " ";
    cout << '\n' << s;
}


int main()
{
    int x, n;
    cin >> x >> n;
    if (n == 0)
        cout << "0\n" << "1";
    else if (x < 0 || n < 0 || x>n)
        cout << "No Sequence";

    else
    {
        int s = (n / x) + 1;
        int* p = new int[s];
        Generate_Multiples_Sequence(x, n, p, s);
        delete[] p;
    }
    return 0;
}


