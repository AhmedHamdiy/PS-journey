

#include <iostream>
using namespace std;
void FindThenMerge(int n1, char* arr1, int idx1, int n2, char* arr2, int idx2, char c)
{
    int z(0), flag(0), af1(0), af2(0);
    int size = n1 + n2 - 1;
    char* arrf = new char[size];
    char* ptr1 = NULL;
    char* ptr2 = NULL;
    for (int i = 0; i < size; i++)
    {
        if (i < idx1)
            arrf[z++] = arr1[i];
        if (i < idx2)
            arrf[z++] = arr2[i];
        if (i == idx1)
            ptr1 = &arr1[i];
        if (i == idx2)
            ptr2 = &arr2[i];
        if (!flag && ptr1 != NULL && ptr2 != NULL)
        {
            af1++;
            af2++;
            flag++;
            arrf[z++] = c;
        }
        if (af1 <= (n1 - idx1 - 1) && ptr1 != NULL && ptr2 != NULL)
        {

            arrf[z++] = ptr1[af1++];
        }
        if (af2 <= (n2 - idx2 - 1) && ptr1 != NULL && ptr2 != NULL)
        {
            arrf[z++] = ptr2[af2++];
        }
    }
    for (int i = 0; i < size; i++)
        cout << arrf[i] << " ";
    cout << "\n" << size;
    delete[]arrf;
}


int main()
{
    int idx1 = 0;
    int idx2 = 0;
    int n1, n2;
    char com = '\0';
    int cntr1 = 0;
    cin >> n1;
    if (n1 < 0)
        return 0;
    if (n1 == 0)
    {
        cout << "No common char";
        return 0;
    }
    char* arr1 = new char[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
        if (int(arr1[i]) >= 97)
        {
            cntr1++;
            idx1 = i;
        }
    }
    if (!cntr1)
    {
        cout << "No common char";
        return 0;
    }
    cin >> n2;
    if (n2 < 0)
        return 0;
    if (n2 == 0)
    {
        cout << "No common char";
        return 0;
    }
    char* arr2 = new char[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
        if (int(arr2[i]) >= 97)
        {
            com = arr2[i];
            idx2 = i;
        }
    }
    FindThenMerge(n1, arr1, idx1, n2, arr2, idx2, com);
    delete[]arr1;
    delete[]arr2;
    return 0;
}