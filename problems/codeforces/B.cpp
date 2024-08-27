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
#define EPS 1e-9


// int dx[] = {+0, +0, -1, +1, +1, +1, -1, -1};
// int dy[] = {-1, +1, +0, +0, +1, -1, +1, -1};



//int mpow(int a, int b, int m) {
//    int res = 1;
//    while (b) {
//        if (b & 1) res = 1LL * res * a % m;
//        a = 1LL * a * a % m, b /= 2;
//    }
//    return res;
//}

//const int N = 1e4 + 10;
//int fact[N], invfact[N];
//
//void pre() {
//    fact[0] = invfact[0] = 1;
//    for (int i = 1; i < N; i++) {
//        fact[i] = 1LL * fact[i - 1] * i % mod;
//        invfact[i] = mpow(fact[i], mod - 2, mod);
//    }
//}
//
//int nCr(int n, int r) {
//    if (r > n) return 0;
//    return 1LL * fact[n] * invfact[r] % mod * invfact[n - r] % mod;
//}
//
//ll fastpow(ll b, ll p) {
//    if (!p) return 1;
//    ll ret = fastpow(b, p >> 1);
//    ret *= ret;
//    if (p & 1) ret *= b;
//    return ret;
//}

//const int MAXN = 200005;
//
//int parent[2 * MAXN], Rank[2 * MAXN];
//
//int find(int x) {
//    if (parent[x] != x) parent[x] = find(parent[x]);
//    return parent[x];
//}
//
//void join(int x, int y) {
//    int rootX = find(x);
//    int rootY = find(y);
//    if (rootX != rootY) {
//        if (Rank[rootX] > Rank[rootY]) parent[rootY] = rootX;
//        else if (Rank[rootX] < Rank[rootY]) parent[rootX] = rootY;
//        else {
//            parent[rootY] = rootX;
//            Rank[rootX]++;
//        }
//    }
//}
//
//
//void init(int n) {
//    for (int i = 0; i < 2 * n; i++) {
//        parent[i] = i;
//        Rank[i] = 0;
//    }
//}
//
//void union_grid(const string &row1, const string &row2, int n) {
//    for (int i = 0; i < n; i++) {
//        if (row1[i] == '.') {
//            if (i > 0 && row1[i - 1] == '.') join(i, i - 1);
//            if (row2[i] == '.') join(i, n + i);
//        }
//        if (row2[i] == '.') {
//            if (i > 0 && row2[i - 1] == '.') join(n + i, n + i - 1);
//        }
//    }
//}
//
//int SCC(const string &row1, const string &row2, int n) {
//    unordered_set<int> component_set;
//    for (int i = 0; i < n; i++) {
//        if (row1[i] == '.') component_set.insert(find(i));
//        if (row2[i] == '.') component_set.insert(find(n + i));
//    }
//    return component_set.size();
//}
double f(double x,int a){
    return (x*x)-(a*x)+a==0;
}

void go(){
    int n,ans=1;
    cin>>n;
    vi v(n);
    scn(v);
    sortall(v);
    lp(i,n){
        auto pos= upper_bound(v.begin()+i,v.end(),5+v[i]);
        if(pos!=v.end()){
            int len= pos-v.begin();
            ans=max(ans,len-i);
        }
        else if(v[n-1]-v[i]<=5)
            ans=max(ans,n-i);
    }
    cout<<ans<<nl;
}
int main() {
    fast_io
//    test_cases
        go();
    return 0;
}
