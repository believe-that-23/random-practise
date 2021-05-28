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
   bool flag=true;
   for(ll i=0;i<n;i++){
       cin>>a[i];
       if(a[i]==i+1)continue;
       flag=false;
   }
   if(flag){cout<<0<<endl;return;}
   ll cnt=2;
   if(a[0]==1||a[n-1]==n){
       cout<<1<<endl;
       return;
   }
   
   if(a[n-1]==1&&a[0]==n)cnt++;
   cout<<cnt<<endl;
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