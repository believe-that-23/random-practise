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
   ll d,c;
   cin>>d>>c;
   vll a(3),b(3);
   ll sum1=0;
   for(ll i=0;i<3;i++){
       cin>>a[i];
       sum1+=a[i];

   }
   ll sum2=0;
   for(ll i=0;i<3;i++){
       cin>>b[i];
       sum2+=b[i];
   }
  ll cost_delivery=sum1+sum2+2*d;
  ll cost_coupon=sum1+sum2+2*d;
  if(sum1>=150)
    cost_coupon-=d;
    if(sum2>=150)
    cost_coupon-=d;

    cost_coupon+=c;

  
   if(cost_coupon<cost_delivery)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;


}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}