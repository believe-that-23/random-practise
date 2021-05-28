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
bool is_square(ll n){
    ll temp=sqrt(n);
    while(temp*temp>n){temp--;}
    while(temp*temp<n){temp++;}
    if(temp*temp==n)return true;
    else return false;
}
void solve()
{
   ll n;
   cin>>n;
   if(n&1){
       cout<<"NO"<<endl;
       return;
   }
   bool flag=false;
    if(n%4==0){
        ll z=n/4;
        if(is_square(z))flag=true;
    }
    if(n%2==0){
        ll z=n/2;
        if(is_square(z))flag=true;
    }
    if(flag)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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