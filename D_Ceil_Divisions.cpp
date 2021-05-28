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
   vll v(n);
   vector<pair<ll,ll>> vec;
   ll count=0;
   for(ll i=1;i<=n;i++){
       cin>>v[i];
   }
   for(ll i=3;i<n;i++){
       if(i==4||i==16)continue;
       vec.pb({i,n});
   }

    if(n>=16){
        ll z=n;
        while(z>1){
            count++;
            vec.pb({n,16});
            z=ceil(z/16);
        }
        vec.pb({16,4});
        vec.pb({16,4});
        count+=2;

    }
    if(n>=4&&n<16){
        ll z=n;
        while(z>1){
            count++;
            vec.pb({n,4});
            z=ceil(z/4);
        }
        vec.pb({4,2});
        vec.pb({4,2});
        count+=2;
    }
    if(n<4)
    {
        vec.pb({n,2});
        vec.pb({n,2});
        count+=2;
    }

    cout<<count<<endl;
    for(auto c:vec){
        cout<<c.fi<<" "<<c.se<<endl;
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