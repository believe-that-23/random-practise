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
   ll h,w,x,y;
   cin>>h>>w>>x>>y;
   x--;y--;
   string s[h];
   for(ll i=0;i<h;i++){
       cin>>s[i];
   }
   ll cnt=0;
   for(ll i=x+1;i<h;i++){
       if(s[i][y]=='#')break;
       cnt++;
   }
   for(ll i=x-1;i>=0;i--){
       if(s[i][y]=='#')break;
       cnt++;
   }
   for(ll i=y-1;i>=0;i--){
       if(s[x][i]=='#')break;
       cnt++;
   }
   for(ll i=y+1;i<w;i++){
       if(s[x][i]=='#')break;
       cnt++;
   }
   if(s[x][y]=='.')cnt++;

   cout<<cnt<<endl;


}
int main() {
FAST;
ll t;
t=1;
while(t--){
   solve();
}
return 0;
}