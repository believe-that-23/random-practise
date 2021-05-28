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
   ll n;
   cin>>n;
   vll a(n),b(n);
   for(ll i=0;i<n;i++)cin>>a[i];
   for(ll i=0;i<n;i++)cin>>b[i];
   ll x=-1,y=10000;
   for(ll i=0;i<n;i++){
       x=max(x,a[i]);
       y=min(y,b[i]);
   }
   ll z=y-x;
   if(z<0)cout<<0<<endl;
   else
    cout<<y-x+1<<endl;
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