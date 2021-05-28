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
   ll a,b;
   cin>>a>>b;
   ll count=0;
   ll z;
       //b++;
      // count++;
   if(b==1){
       b++;count++;
   }
   ll ans=INT_MAX;
   ll i;
   for(i=b;i<b+5;i++){
       ll c=0;
       z=a;
       while(z){
           z=z/i;c++;
       }
       
    ans=min(ans,count+c);
    count++;

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