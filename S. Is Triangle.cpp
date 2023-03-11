#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		double h = (a + b + c)/2;
		cout << "Valid" << endl;
		cout << fixed << setprecision(6) << sqrt(h * (h - a) * (h - b) * (h - c));
	}
	else {
		cout << "Invalid" << endl;
	}
}