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
   vll v(18);
   if(n<10){
       cout<<n<<endl;
       return;
   }
    v[0]=0;
   v[1]=1;
   v[2]=11;
   v[3]=111;
   v[4]=1111;
   v[5]=11111;
   v[6]=111111;
   v[7]=1111111;
   v[8]=11111111;
   v[9]=111111111;
   v[10]=1111111111;
   ll index=-1;
   ll ans=1;

   for(ll i=10;i>=1;i--){
       if(v[i]*9>n)continue;
        else{
            ans*=9*i;
            // cout<<"i<<"<<i<<endl;
            for(ll j=1;j<10;j++){
                if(v[i+1]*j<=n){
                    ans++;
                }
            }
            break;
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