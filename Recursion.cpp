#include<iostream>
#include <string>
typedef long long ll;
using namespace std;
void foo(int x) {
	if (x == 10) return;
	std::cout << x << '\n'; foo(x + 1); std::cout << x << '\n';
}
int fact(int n) {
	if (n <= 1)
		return 1;
	return n * fact(n - 1);
}
ll recfib(int n){
	if (n <= 2)
		return 1;
	return recfib(n - 1) + recfib(n - 2);
}
ll itrfib(int n) {
	if (n <= 2)
		return 1;
	int fib1 = 1;
	int fib2 = 1;
	for (int i = 2; i < n; i++)
	{
		int tmp = fib1;
		fib1 = fib2;
		fib2 += tmp;
	}
	return fib2;
}
ll nck(int n, int k) {
	 if (k == n||k==0) return 1;
	else if (k > n) return 0;
	return nck(n - 1, k - 1) + nck(n-1, k);
}
void TowersOfHanoi(int n, string src, string dis, string aux) {
	if (n == 1) cout << "Move from " << src << " to " << src << endl;
	else {
		TowersOfHanoi(n - 1, src, aux, dis);
		TowersOfHanoi(1, src, dis, aux);
			TowersOfHanoi(n - 1, aux, dis, src);
	}
}
void main() {
	//foo(1);
	cout << "The Factorial of 3 is: " << fact(3)<<endl;
	cout << "The  Recuresive Fibonacci no. 6 is : " << recfib(12)<<endl;
	cout << "The  Iterative Fibonacci no. 6 is : " << itrfib(12) << endl;
	cout << "The  result of 10C4 : " << nck(10,4) << endl;
	cout << "The  soluation of Towers Of Hanoi if n=5 :" << endl;
	TowersOfHanoi(5, "AHMED", "SHAWERMA", "HANA");


}