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
   ll s;
   cin>>s;
   vll q(s);
   for(ll i=0;i<s;i++)
    cin>>q[i];
    vll e(s+1);
   for(ll i=0;i<s;i++)
   {
       cin>>e[i];
   }
   vector<vll> l(s);
   for(auto c:e){
      for(ll i=0;i<c;i++){
          ll z;
          cin>>z;
          l[c].pb(z);
      }
   }
    ll total=0;
    for(auto c:e){
        ll j=0;
        for(ll i=1;i<c;i++){
            total+=l[c][i]-q[j];
        }
        total+=l[c][0];
        j++;
    }
    cout<<total<<endl;

   


}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}