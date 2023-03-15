#include <iostream>
using namespace std;

char* WalkAndDecode(int size1, char* charr, int size2, int* steparr) {
    char* codearr = new char[size2];
    int idx1 = 0, idx2 = 0;
    for (int i = 0; i < size2; i++) {
        if (steparr[i] % 2 == 1)
            idx1 -= steparr[i];
        else
            idx1 += steparr[i];
        while (idx1 < 0)
            idx1 += size1;
        idx1 %= size1;
        codearr[idx2++] = charr[idx1];
    }
    return codearr;
}

int main() {
    int n1, n2;
    cin >> n1;
    if (n1 <= 0)
    {
        cout << "No message to decode";
        return 0;
    }
    char* arrch = new char[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arrch[i];
    }
    cin >> n2;
    if (n2 < 0) {
        delete[]arrch;
        cout << "No message to decode";
        return  0;
    }
    if (n2 == 0) {
        for (int i = 0; i < n1; i++)
            cout << arrch[i];
        cout << endl << n1;
        delete[]arrch;
        return 0;
    }

    int* arrstp = new int[n2];
    for (int i = 0; i < n2; i++)
        cin >> arrstp[i];
    char* codearr = WalkAndDecode(n1, arrch, n2, arrstp);
    for (int i = 0; i < n2; i++)
        cout << codearr[i];
    cout << endl << n2;
    delete[]codearr;
    delete[]arrstp;
    delete[]arrch;
    return 0;
}