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
   ll x;
   cin>>x;
   for(ll i=1;i<=x;i++)
   {
       for(ll j=1;j<=x;j++){
           if(i*i*i+j*j*j==x){
               cout<<i<<" "<<j<<endl;
           }
       }
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