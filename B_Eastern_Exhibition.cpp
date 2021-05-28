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
using namespace std;
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
   vll x;
   vll y;
   for(ll i=0;i<n;i++){
       ll u,v;
       cin>>u>>v;
       x.pb(u),y.pb(v);
   }
   sort(all(x));
   sort(all(y));
   if(n%2==1){
       cout<<1<<endl;
       return;
   }

   cout<<(x[n/2]-x[(n-1)/2]+1)*(y[n/2]-y[(n-1)/2]+1)<<endl;


}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}