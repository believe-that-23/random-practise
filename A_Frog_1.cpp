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

int main() {
ll n;
cin>>n;
ll y;
vll h(n);
for(ll i=0;i<n;i++){
    cin>>h[i];
    //cout<<y;
}
vll dp(100005,INT_MAX);
dp[0]=0;

for(ll i=0;i<n;i++){
    for(ll j:{i+1,i+2}){
       if(j<n) {dp[j]=min(dp[j],dp[i]+abs(h[i]-h[j]));}
    }
}
cout<<dp[n-1];

return 0;
}