
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
   vll dp;
   ll n,m;
   cin>>n>>m;
   vll a(n);
   for(ll i=0;i<n;i++)cin>>a[i];
   ll sum=0;
   for(ll i=1;i<n-1;i++){
       if(a[i]!=0){
           continue;
       }
        if(abs(a[i-1]-a[i+1])==2)sum+=1;
        if(abs(a[i-1]-a[i+1])==1)sum+=2;
        if(abs(a[i-1]-a[i+1])==0)sum+=3;       
   }
   cout<<sum<<endl;
   
}
int main() {
ll t;
t=1;
while(t--){
   solve();
}
return 0;
}