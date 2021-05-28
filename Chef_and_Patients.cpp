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
   ll z;
   vll a(n);
   for(ll i=0;i<n;i++){
       cin>>v[i];
       a[i]=v[i];
   }
   sort(all(a));
   a.erase(unique(all(a)),a.end());
   reverse(all(a));

   vll h(n);
   z=1;
   for(ll k=0;k<a.size();k++){
       
     for(ll i=0;i<n;i++){
        if(a[k]==v[i]){
            h[i]=z++;
       }
   }
   
   

   }
   for(ll i=0;i<n;i++){
       cout<<h[i]<<" ";
   }
   cout<<endl;

   

}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}