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
   ll n,m;
   cin>>n>>m;
//    vll a(n);
   map<ll,ll> freq;
   for(ll i=0;i<n;i++){
       ll z;
       cin>>z;
       z%=m; 
    //    a[i]=z;
       freq[z]++;
   }
//    sort(all(a));
   //sum of adjacent elements should be divisible by k
   ll ans=0;
//    bool check=false;
   if(freq.count(0)) ans++;
   if(m%2==0&&freq.count(m/2))ans++;
   for(ll i=1;i<(m+1)/2;i++){
    

    //    ll z=(a[i]+m-1)/m;
    //    z*=m;
    //    if(a[i]==(z-a[i])&&freq[a[i]]>0){
    //        freq[a[i]]=0;
    //        ans++;
    //        continue;
    //    }
    
       if(freq.count(i)||freq.count(m-i)){
           ans+=max(abs(freq[i]-freq[m-i]),1LL);
       }
   }
//    for(auto c:freq){
//        if(c.fi==0)continue;
//        ans+=c.se;
//    }
   
   cout<<ans<<endl;
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