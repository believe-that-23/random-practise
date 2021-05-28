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
   ll n,k1,k2;
   ll w,b;
   cin>>n>>k1>>k2>>w>>b;
   ll avail_white=min(k1,k2);
   ll avail_black=n-max(k1,k2);
   ll z=abs(k1-k2);
   z=z/2;
   avail_white+=z;
   avail_black+=z;
   //cout<<avail_white<<" "<<avail_black<<endl;
   if(w>avail_white||b>avail_black){
       cout<<"NO"<<endl;
       return;
   }

   cout<<"YES"<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}