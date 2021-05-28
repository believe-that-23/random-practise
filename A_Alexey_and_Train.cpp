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
   vll a(n+1),b(n+1),tm(n+1);
   for(ll i=1;i<=n;i++)cin>>a[i]>>b[i];
   for(ll i=1;i<=n;i++)cin>>tm[i];
   b[0]=0;
   vll time(n+1);
   ll ans=0;
   for(ll i=1;i<=n;i++){
       time[i]=a[i]-b[i-1]+tm[i];
   }
   ll z=0;
   for(ll i=1;i<n;i++){
        z+=time[i];
        ll y=b[i]-a[i];
        z+=(y%2==0?y/2:y/2+1);
        if(z<b[i]){
            z=b[i];
        }
    }
    z+=time[n];


   cout<<z<<endl;


   


}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}