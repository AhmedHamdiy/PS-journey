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
typedef __int128_t lll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<pair<int,int>> vpi;
typedef vector<pair<ll,ll>> vpl;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;

//Typing Shortcuts
#define CASES int TESTCASES=1; cin >> TESTCASES; while (TESTCASES--)
#define nl cout<<endl;
#define IO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

//container shortcuts
#define lp(i, n) for (int i = 0; i < (int)(n); ++i)
#define lpi(i, j, n) for (int i = (j); i < (int)(n); ++i)
#define lpd(i, j, n) for (int i = (j); i >= (int)(n); --i)
#define scn(v) for(auto & x: v) cin>>x;
#define prnt(v) for(auto & x: v) cout<<x<<" "; nl
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
#define _sz 200005
bool f(ll l, const string & s, const string & t, const vi & v){
    int n=s.length(),m=t.length(),i,j;
    string temp=s;
    lp(i,l)
        temp[v[i]-1]='?';
    for(i=0,j=0;i<n&&j<m;i++)
        if(t[j]==temp[i])
            j++;
    return (j==m);
}
void run(){
    string s,t;
    cin>>s>>t;
    int n=sz(s);
    vi v(n);
    scn(v);
    int st=0,nd=n+1,ans=0;
    while(st<=nd){
        int m= st+(nd-st)/2;
        if(f(m,s,t,v))
            ans=m,st=m+1;
        else
            nd=m-1;
    }
    cout<< ans<<endl;
}
int32_t main() {
    IO
//    CASES
    run();
    return 0;
}
