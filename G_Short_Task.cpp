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
vector<bool> prime(10000,true);
void seive(){
    for(int i=2;i<=5000;i++){
        if(prime[i]){
            for(ll j=i*i;j<=5000;j+=i){
                prime[j]=false;
            }         
        }
    }
}
map<ll,ll> available;
void solve(ll c)
{
    ll z=c;
   vector<ll> powr;
   ll cnt;
   for(ll i=2;i<=5000;i++){
       cnt=0;
       if(!prime[i])continue;
       while(c%i==0){
           c/=i;
           cnt++;
       }
       if(cnt)powr.pb(cnt);
   }
   if(c)powr.pb(1);
   ll ans=1;
   for(auto c:powr){
       ans*=(c+1);
   }
   available[z]=ans;
   //cout<<ans<<endl;

}
int main() {
FAST;
for(ll i=2;i<=1000000;i++){
    solve(i);
}
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
   for(ll i=1;i<1000000;i++){
       if(available[i]==n){
           cout<<i<<endl;
           break;
       }
   }
}
return 0;
}