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
//----------------------------------------------------------------------------
void solve()
{
   ll n;
   cin>>n;
   vll h(n);
   vll iq(n);
   for(ll i=0;i<n;i++){
       cin>>h[i];
   }
   for(ll i=0;i<n;i++){
       cin>>iq[i];
   }
   vector<pair<ll,ll>> v;
    for(ll i=0;i<n;i++){
        v.pb({h[i],iq[i]});
    }
    vll count;
    ll ct=0;
    for(auto c:v){
        for(auto x:v){
            if(c.fi<x.fi&&c.se>x.se)ct++;
        }
        count.pb(ct);
    }
    ll ans=INT_MIN;
    for(auto c:count){
        ans=max(ans,c);
    }

    cout<<ans<<endl;

}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}