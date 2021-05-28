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
   vll a(n);
   vll s(n);
   vector<vll> v(n+1);
   for(ll i=0;i<n;i++){
       cin>>a[i];
   }
   for(ll i=0;i<n;i++){
       cin>>s[i];  
   }
   vll sum(n+1,0);
   vector<vll> pref(n+1);
   for(ll i=0;i<n;i++){
       v[a[i]].pb(s[i]);
   }
   vll ans(n+1);
   for(ll i=0;i<n;i++){
       sort(all(v[i]));
       ll m=v[i].size();
       vll pref(m+1);
       pref[0]=v[i][0];
       for(ll j=0;j<m;j++)
       pref[j+1]=pref[j]+v[i][j];

        for(ll z=1;z<=m;z++){
            ans[z]+=pref[m]-pref[m%z];
        }
   }
  for(ll i=1;i<=n;i++){
      cout<<ans[i]<<" ";
  }
  cout<<endl;

}
int main() {
FAST;
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}