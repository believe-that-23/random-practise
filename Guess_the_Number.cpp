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
//#define endl "\n"
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
ll query(ll n){
    ll x;
    cout<<n<<endl;
    cin>>x;
    //cout<<endl;
    return x;
}
bool perfect_sq(ll n){
    ll temp=sqrt(n);
    while(temp*temp>n)temp--;
    while(temp*temp<n)temp++;
    if(temp*temp==n)return true;

    return false;
}
void solve()
{
   for(ll i=1;i<1000000;i++){
       if(perfect_sq((i))){
           if(query(i)==1){
               //cout<<i<<endl;
               return;
           }
           if(query(i)==-1){
               exit(0);
           }
           if(query(i)==0)continue;
       }
   }
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}