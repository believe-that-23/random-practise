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
   vll a(n);
   vll b;
   for(ll i=0;i<n;i++){
       cin>>a[i];
   }
   //6 7 3 11 15
   //5 6 7
   ll k=0;
   bool flag=false;
   for(ll i=1;i<n;i++){
       if(__gcd(a[i],a[i-1])==1)continue;
       flag=true;  
       k++;     
    //    ans[k].pb(i);
    //    ans[k].pb(i+1);
       ll z=min(a[i],a[i-1]);
       a[i-1]=z;
       a[i]=z+1;
       b.pb(i);
       b.pb(i+1);
       b.pb(z);
       b.pb(z+1);

    //    ans[k].pb(a[i]);
    //    ans[k].pb(a[i-1]);
    //    k++;
   }
   if(!flag){
       cout<<0<<endl;
       return;
   }
   cout<<k<<endl;
   ll cnt=0;
   for(auto c:b){
       cnt++;
       cout<<c<<" ";
       if(cnt%4==0)cout<<endl;
   }
   cout<<"a:";
   for(auto c:a){
       cout<<c<<" ";
   }
   cout<<endl;
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