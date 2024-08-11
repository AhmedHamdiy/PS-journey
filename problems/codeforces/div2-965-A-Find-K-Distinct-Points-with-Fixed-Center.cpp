/*
░  ░░░░  ░░░      ░░░  ░░░░  ░░       ░░░  ░░░░  ░
▒  ▒▒▒▒  ▒▒  ▒▒▒▒  ▒▒   ▒▒   ▒▒  ▒▒▒▒  ▒▒▒  ▒▒  ▒▒
▓        ▓▓  ▓▓▓▓  ▓▓        ▓▓  ▓▓▓▓  ▓▓▓▓    ▓▓▓
█  ████  ██        ██  █  █  ██  ████  █████  ████
█  ████  ██  ████  ██  ████  ██       ██████  ████

*/
#include <bits/stdc++.h>
using namespace std;

//Data Types
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpl;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;

//Typing Shortcuts
#define test_cases int TESTCASES=1; cin >> TESTCASES; while (TESTCASES--)
#define nl '\n'
#define fast_io ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//container shortcuts
#define lp(i, n) for (int i = 0; i < (int)(n); ++i)
#define lpi(i, j, n) for (int i = (j); i < (int)(n); ++i)
#define lpd(i, j, n) for (int i = (j); i >= (int)(n); --i)
#define scn(v) for(auto & x: v) cin>>x;
#define prnt(v) for(auto & x: v) cout<<x<<" "; endl;
#define sz(a) ((int)a.size())
#define all(x) (x).begin(), (x).end()
#define sortall(x)  sort((x).begin(), (x).end())
#define rall(x) (x).rbegin(),(x).rend()
#define pb push_back
#define mem(arrr, xx) memset(arrr, xx, sizeof arrr)
#define X first
#define Y second
#define Ones(n) __builtin_popcount(n)

//Constants
#define PI acos(-1)
#define INF 0x3f3f3f3f
#define MOD 1e9 + 7
#define EPS 1e-7

double f(double a,int d){
    return pow(a,2)-(d*a)+d<=EPS;
}
void go(){
    ll xc,yc,k;
    cin>>xc>>yc>>k;
    int m=k/4;
    ll i=1;
    while(m--){
        cout<<xc+i<<" "<<yc<<endl;
        cout<<xc-i<<" "<<yc<<endl;
        cout<<xc<<" "<<yc+i<<endl;
        cout<<xc<<" "<<yc-i<<endl;
        i++;
    }
    if(k%2==1)
        cout<<xc<<" "<<yc<<endl;
    if(k%4>=2){
        cout<<xc+i<<" "<<yc<<endl;
        cout<<xc-i<<" "<<yc<<endl;
    }
}

int main() {
    fast_io
    test_cases
    go();
    return 0;
}
