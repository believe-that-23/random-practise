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
   ll n,q;
   cin>>n>>q;
   vll a(n),b(n);
   ll count1=0;
   ll count0=0;
   for(ll i=0;i<n;i++){
       cin>>a[i];
       if(a[i]==1)count1++;
        else count0++;
   }
    vector<pair<ll,ll>> t;
   for(ll i=0;i<q;i++){
       ll x,y;
       cin>>x>>y;
       t.pb({x,y});
    }
    for( auto c:t){
        if(c.fi==1){
            c.se--;
            a[c.se]=1-a[c.se];
            if(a[c.se]==0){
                count1--;
                count0++;
            }
            else{
                count1++;
                count0--;
            }
        }
        else{
           // cout<<count1<<" "<<count0<<endl;
            if(c.se<=count1)cout<<1<<endl;
            else cout<<0<<endl;
        }
    }
}
int main() {
ll t;
t=1;
while(t--){
   solve();
}
return 0;
}