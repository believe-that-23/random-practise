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
   ll count=0;//xor operator ek badhiya cheez hai
   while(n){
   	if(n&1==0)continue;
   	else count++;

   	n=n>>1;
   	
   }
   cout<<"total significant bits:"<<count<<endl;
}

int main() {
	int dp[1000];
memset(dp,-1,sizeof(dp));
for(ll i=0;i<10;i++){cout<<dp[i]<<" ";}
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}