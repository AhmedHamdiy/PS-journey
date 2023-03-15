#include <iostream>
using namespace std;

void DoublingCharacters(int n1, char arr1[], int n2, int arr2[])
{
    int size = n1;
    int cntr = 0;
    for (int i = 0; i < n2; i++)
        if (arr2[i] < n1 && arr2[i]>0)
            size++;
    char* arr_doub = new char[size + 1];
    for (int i = 0; i < size; i++)
    {
        arr_doub[cntr++] = arr1[i];
        for (int j = 0; j < n2; j++)
            if ((i == arr2[j]) && arr2[j] < n1 && arr2[j]>0)
                arr_doub[cntr++] = arr1[i];
    }
    arr_doub[size] = '\0';
    cout << arr_doub << endl;
    cout << size;
    delete[]arr_doub;
}
int main()
{
    int n1, n2;
    cin >> n1;
    if (n1 <= 0)
    {
        cout << "Empty";
        return 0;
    }
    char* arrc = new char[n1];
    for (int i = 0; i < n1; i++)
        cin >> arrc[i];
    cin >> n2;
    if (n2 <= 0)
    {
        cout << "No duplication";
        delete[]arrc;
        return 0;
    }
    int* arrn = new int[n2];
    for (int i = 0; i < n2; i++)
        cin >> arrn[i];
    DoublingCharacters(n1, arrc, n2, arrn);
    delete[]arrn;
    delete[]arrc;
    return 0;
}
