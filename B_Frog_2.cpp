#include <bits/stdc++.h>
#include <cmath>
#include <regex>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
#define FAST ios_base :: sync_with_stdio (false); cin.tie (NULL)
using namespace std;
#define endl "\n"
ll C(ll n, ll k) {
    double res = 1;
    for (int i = 1; i <= k; ++i)
       res = res * (n - k + i) / i;
    return (ll)(res + 0.01);
}
vector<vll> readGraph(ll n,ll m){
    vector<vll> g(n);
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        //sc.read(a,b);
        //a--;b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    return g;
}
vector<vll> readTree(int n){
    return readGraph(n,n-1);
}
//----------------------------------------------------------------------------

void solve()
{
   ll n,k;
   cin>>n>>k;
   vll dp(n+1,INT_MAX);
   vll h(n+1);
   for(ll i=1;i<=n;i++)cin>>h[i];
   dp[1]=0;
   dp[2]=abs(h[2]-h[1]);
    for(ll i=3;i<=n;i++){
        for(ll j=1;j<=k;j++){
            if(i>j)
              dp[i]=min(dp[i],dp[i-j]+abs(h[i]-h[i-j]));
        }
    }
    cout<<dp[n]<<endl;
}
int main() {
FAST;
ll t;
t=1;
while(t--){
   solve();
}
return 0;
}