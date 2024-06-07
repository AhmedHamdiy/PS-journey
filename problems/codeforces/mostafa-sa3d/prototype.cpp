/*
----------------------------------------------------------------------------
							My name is Ahmed Hamdy
----------------------------------------------------------------------------
*/
#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <numeric>
#include <random>
using namespace std;


// Data types
#define ll long long
#define ull unsigned long long
#define vi vector<int> 
#define pii pair<int, int> 
#define vpi vector<pii> 
#define vc vector<char>
#define vd vector<double>
#define vvi vector<vector<int>>
#define vvd vector<vector<double>>
#define vvc vector<vector<char>>
#define vvpi vector<vector<pair<int,int>>>
#define vvpl vector<vector<pair<ll,ll>>>
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll,ll>>
#define vpi vector<pair<int,int>>
#define vppi vector<pair<int,pair<int,int>>>
#define vb vector<bool>
#define vvb vector<vector<bool>>

// STL containers
#define pb push_back
#define mp make_pair
#define X first
#define Y second
#define all(x) (x).begin(), (x).end()

// STL algorithms
#define srt(x) sort(all(x))
#define sz(x) ((int)(x).size())
#define scn(x) for (auto& i : x)cin >> i;
#define scnp(x) for (auto& i : x)cin >> i.X>>i.Y;
#define prnt(x) for (auto& i : x)cout << i<<" ";

// Macros
#define lp(i, a, b) for (int i = (a); i < (b); ++i)
#define rlp(i,a,b) for(int i=a-1;i>=b;i--)
#define lp0(i, n) rep(i, 0, n)
#define lp1(i, n) rep(i, 1, n+1)
#define vclp(v) for (auto x : v)
#define endl cout<<"\n"

// Constants
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
#define pi 3.141592654
#define MOD 1000000007


// Helping functions
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

ll sm(ll n) {
	if (n == 0) return 0;
	return n * (n + 1) / 2;
}


ll fastPow(ll x, ll n) {
	if (n == 0) {
		return 1;
	}
	ll pow = fastPow(x, n / 2);
	pow = (pow * pow) % MOD;
	if (n & 1) {
		pow *= x;
	}
	return pow % MOD;
}

void solve()
{
	int n;
	cin >> n;
	vl v(n);
	scn(v);

	for (int i = 1; i <= n; i++) {
		if (v[i - 1] <= i) {
			cout << "YES";
			return;
		}
	}
	cout << "NO";
}

bool correctString(string s, vector<string> stringList)
{
	for (int i = 0; i < stringList.size(); i++) {
		// the following condition means not found in string
		if (s.find(stringList[i]) == string::npos)
			return false;
	}
	return true;
}


string generateString(string s, int n, vector<string> stringList) {
	if (s.length() == n) {
		if (correctString(s, stringList))
			return s;
		else
			return "";
	}
	string s1 = generateString(s + "0", n, stringList);
	string s2 = generateString(s + "1", n, stringList);
	return s1 == "" ? s2 : s1;
}
int magicalNumber(int n, int& maxResult)
{
	int root = sqrt(n);
	for (size_t i = root; i > 1; i--)
	{
		int magic = n;
		int result = 1;
		int divider = magic / i;

		while (magic >= i)
		{
			result *= i;
			magic -= i;
		}
		if (magic == 1)
		{
			result = result * (i + 1) / i;
		}
		else if (magic > 1)
			result *= magic;
		if (maxResult < result)
			maxResult = result;
	}
	return maxResult;
}

bool equalApples(vector<int>& apples, int index, int lsum, int rsum) {
	int size = apples.size();
	if (index == size)

	{
		if (lsum == rsum)
			return true;
		else return false;
	}
	return equalApples(apples, index + 1, lsum - apples[index], rsum + apples[index]) || equalApples(apples, index + 1, lsum, rsum);
}
void minimumRoute(vector<vector<int>>& mountain, int n, int& minEffort, int y, int x, int currentEffort) {
	int effort = mountain[y][x];
	currentEffort += effort;
	if (y == n - 1)
	{
		if (currentEffort < minEffort)
			minEffort = currentEffort;
		return;
	}
	minimumRoute(mountain, n, minEffort, y + 1, x, currentEffort);
	if (x < n - 1)
		minimumRoute(mountain, n, minEffort, y + 1, x + 1, currentEffort);
	if (x > 0)
		minimumRoute(mountain, n, minEffort, y + 1, x - 1, currentEffort);
}

void generateNumber(int number, vector<int> digits, vector<bool> isused, int n, int index) {
	if (index == n) {
		cout << number << " ";
	}
	for (int i = 0; i < n; ++i) {
		if (!isused[i]) {
			isused[i] = true;
			generateNumber(number * 10 + digits[i], digits, isused, n, index + 1);
			isused[i] = false;
		}
	}
}

void LIS(vector<int>& values, vector<int> seq, vector<int>& maxseq, int n, int index) {
	if (index == n)
	{
		if (seq.size() > maxseq.size())
		{
			int prev = INT_MIN;
			for (auto it = seq.begin(); it != seq.end(); it++)
			{
				if (*it < prev)
					return;
				prev = *it;
			}
			maxseq = seq;
		}
	}
	else {
		LIS(values, seq, maxseq, n, index + 1);
		seq.push_back(values[index]);
		LIS(values, seq, maxseq, n, index + 1);
		seq.pop_back();
	}
}

// Problem 3
void steps(int numSteps, int& count) {
	if (numSteps < 0)
		return;
	if (numSteps == 0) {
		count++;
		return;
	}
	steps(numSteps - 3, count);
	steps(numSteps - 2, count);
	steps(numSteps - 1, count);
}

// Problem 3 but with printing of all possible solutions
void stepsV2(int numSteps, int& count, string s = "") {
	if (numSteps < 0)
		return;
	if (numSteps == 0) {
		cout << s;
		endl;
		count++;
		return;
	}
	stepsV2(numSteps - 3, count, s + "3");
	stepsV2(numSteps - 2, count, s + "2");
	stepsV2(numSteps - 1, count, s + "1");
}

//////////////////////////////////////////////
//another simple solution

int prob4(int n, int step = 0) {

	if (step == n)
		return 1;

	if (step > n)
		return 0;

	return prob4(n, step + 1) + prob4(n, step + 2) + prob4(n, step + 3);
}
///////////////////////////////////////////////////////////////////////


int main() {
	int n;
	cin >> n;


	int count = 0;
	steps(n, count);
	cout << "sol1 :" << count << '\n';

	cout << "***************************\n";

	int count2 = 0;
	cout << "sol2: \n";
	stepsV2(n, count2);
	cout << "count = " << count2 << '\n';
	cout << "*********************************\n";

	cout << "sol3 : " << prob4(n) << "\n";
	return 0;
}
