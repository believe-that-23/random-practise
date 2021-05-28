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
   vll a(n);
   for(ll i=0;i<n;i++){
       cin>>v[i];
       a[i]=v[i];
   }
   //sort(all(a));
   //a.erase(unique(all(a)),a.end());
   set<ll> s;
   for(ll i=0;i<a.size();i++){
       for(ll j=0;j<a.size();j++)
       
       s.insert(abs(a[i]-a[j]));
   }
   
   cout<<s.size()-1<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}