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
int BITS=20; 
void solve()
{
   int n,W;
   cin>>n>>W;
   vector<int> w(n);
   vector<int> freq(BITS,0);
   for(ll i=0;i<n;i++){
       cin>>w[i];
       freq[__builtin_ctz(w[i])]++;
   }
   ll ans=0;
   while(*max_element(all(freq))>0){
       ans++;
       ll z=W;
       for(int b=BITS-1;b>=0;b--){
           while(z>=1<<b&&freq[b]>0){
               z-=1<<b;
               freq[b]--;
           }
       }               
   }

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