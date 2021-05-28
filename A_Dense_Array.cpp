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
   for(ll i=0;i<n;i++){
       cin>>a[i];
   }
    int cnt=0;
    for(ll i=0;i<n;i++){
        ll z=min(a[i],a[i+1]);
           ll x=max(a[i],a[i+1]);
        if(x<=2*z){continue;}
        else{
           
           while(x>2*z){
               z*=2;
               cnt++;
               continue;
           } 
        }
    }
    cout<<cnt<<endl;

}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}