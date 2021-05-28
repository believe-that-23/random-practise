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
   ll n,m,x;
   cin>>n>>m>>x;
    if(x==n*m||x==1){
        cout<<x<<endl;return;
    }

   ll r;
   ll c;
   c=x%n;
   if(c==0)c=n;
   c-=1;
   c*=m;
   r=(x+n-1)/n;
   cout<<r+c<<endl;


  //b cout<<x<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}