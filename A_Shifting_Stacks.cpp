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
   vll a(n+1);
   for(ll i=0;i<n;i++){
       cin>>a[i];
   }
   
   int flag=0;
   for(ll i=0;i<n;i++){
       if(a[i]<i)
       {
            flag=1;
       }
       a[i+1]+=a[i]-i;
       a[i]=i;
       
    }
   if(flag==1){
       cout<<"NO"<<endl;return;
       }
   else{
       cout<<"YES"<<endl;return;
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