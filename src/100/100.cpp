/* Author: Jason L.(int3xccATgmailDOTcom), Tue Aug  8 20:04:45 CST 2017 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long; using pll = pair<ll, ll>; using dd = long double;
//=========================================================================
namespace {
static bool constexpr dbg =
#ifdef INT3XCC_DEBUG
        1;
#else
        0;
#endif
#define Dprintf(fmt, ...) do{if(dbg) printf(fmt, ##__VA_ARGS__);}while(0)
#define REP0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define REP1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
//=========================================================================
ll constexpr N = -1;
ll n;
//=========================================================================
void init() {
}
void solve() {
    ll a, b; cin>>a>>b; cout<<(a+b);
}}
//=========================================================================
int main() {
    if (!dbg) { std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
    cout<<fixed<<setprecision(20); init(); solve(); return 0;
}
