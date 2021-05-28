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
const ll N=1e4+5;
vll dp(N);
void solve()
{
   ll n;
   cin>>n;

   cout<<dp[n+1]<<endl;

}
int main() {
ll t;
cin>>t;

dp[1]=1;
dp[2]=2;
dp[3]=4;
for(ll i=4;i<N;i++){
	dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
}
while(t--){
   solve();
}
return 0;
}