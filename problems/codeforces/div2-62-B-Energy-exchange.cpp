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
bool f(double mid, const vi & v, double k){
    double loss=0.0,gain=0.0;
    int n=sz(v);
    lp(i,n)
        if(v[i]>mid)
            gain+=(v[i]-mid)*k;
        else
            loss+=mid-v[i];
    return gain>=loss;
}
void run(){
    int n,k;
    cin>>n>>k;
    double x=1.0-k/100.0;
    vi v(n);
    scn(v);
    double st=0.0,nd=1000.0,ans=0.0;
    for(int i=0;i<100;i++){
        double mid= st+(nd-st)/2;
        if(f(mid,v,x)) {
            st = mid;
            ans=max(ans,mid);
        }
        else
            nd=mid;
    }
    cout<< fixed << setprecision(10) << ans <<endl;

}
int32_t main() {
    IO
    run();
    return 0;
}
