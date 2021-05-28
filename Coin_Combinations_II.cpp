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
 
const ll M=1e9+7;
int main() {
ll n,x;
cin>>n>>x;
vll coins(n);
for(ll i=0;i<n;i++){
    cin>>coins[i];
}
vll dp(x+1,0);
//base case
dp[0]=1;
for(ll j=0;j<n;j++)
{
    for(ll i=1;i<=x;i++)
    {
        if(coins[j]>i)continue;
        dp[i]=(dp[i]+dp[i-coins[j]])%M;
    }
}

cout<<dp[x];
return 0;
}