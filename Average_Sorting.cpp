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
   vll a(n);
   set<ll> s;
   for(ll i=0;i<n;i++){
       cin>>a[i];
       s.insert(a[i]);
   }
   if(s.size()==1){
       cout<<"No"<<endl;return;
   }
   if(n==2&&a[0]>a[1]){
       cout<<"No"<<endl;return;
   }
   if(a[n-1]<a[n-3]){cout<<"No"<<endl;return;}
    
    cout<<"Yes"<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}