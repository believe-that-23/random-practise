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
   ll n,m;
   cin>>n>>m;
   vll k(n);
   for(ll i=0;i<n;i++)
   {
       cin>>k[i];
   }
   vll c(m);
   for(ll i=0;i<m;i++){
       cin>>c[i];
   }
   sort(all(k),greater<int>());
    ll ans=0;
    ll j=0;
    for(ll i=0;i<n;i++){
        if(k[i]>j){
            ans+=c[j++];
         }
         else{
             ans+=c[k[i]-1];//zero based indexing in c
             //if we dont -1 then it goes one element ahead;;;
         }
    }





   cout<<ans<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}