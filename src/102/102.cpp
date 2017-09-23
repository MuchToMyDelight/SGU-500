/* Author: Jason L.(int3xccATgmailDOTcom), Fri Aug 18 20:26:11 CST 2017 */
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
ll constexpr N = 1.1e4;
ll n;
bool pr[N], cnt[N];
//=========================================================================
void init() {
    cin>>n;
}
void solve() {
    REP0(i, N) pr[i] = cnt[i] = true;
    for (ll i = 2; i <= n; ++i) if (pr[i]) {
        for (ll j = i*i; j <= n; j += i) pr[j] = false;
        if (n % i) continue;
        for (ll j = i; j <= n; j += i) cnt[j] = false;
    }
    ll res = 0; REP1(i, n) if (cnt[i]) ++res;
    cout<<res;
}}
//=========================================================================
int main() {
    if (!dbg) { std::ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}
    cout<<fixed<<setprecision(20); init(); solve(); return 0;
}
