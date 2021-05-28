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
   
   
   
//    dp[i]->max amount that can be
//    made using ith coin
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=3;
    for(ll i=4;i<=n;i++){
        dp[i]=max(dp[i],dp[i/2]+dp[i/3]+dp[i/4]);
    }
    cout<<dp[n]<<endl;
}
int main() {
FAST;
ll t;
t=2;
while(t--){
   solve();
}
return 0;
}