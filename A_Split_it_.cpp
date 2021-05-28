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
   ll n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   if(k==0){
       cout<<"YES"<<endl;return;
   }
   if(s.length()<(2*k+1)){
       cout<<"NO"<<endl;
       return;
   }
   string t=s;
  // ll p=(k*(k+1))/2;
   string u,v;
   for(ll i=0;i<k;i++){
       u.pb(t[i]);
   }
   for(ll i=n-1;i>=n-k;i--){
       v.pb(t[i]);
   }
   if(u==v){cout<<"YES"<<endl;return;}
   else {cout<<"NO"<<endl;return;}


}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}