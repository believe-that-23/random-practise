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
   ll n,k,m;
   cin>>n>>k>>m;
   vll ass(n),chef(n);
   for(ll i=0;i<n;i++)cin>>ass[i];

   	ll count=0;
   for(ll i=0;i<n;i++){
   	cin>>chef[i];
   	if(abs(chef[i]-ass[i])>k)count++;
   }
   if(count<m)cout<<1<<endl;
   else cout<<0<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}