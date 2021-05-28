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
const ll M=1e8;
//----------------------------------------------------------------------------
ll dp[101][101][11][11];
ll limit_f,limit_h;
ll calculate(ll n1,ll n2,ll k1,ll k2){
    if(n1+n2==0)return 1;
    ll x=0,y=0;
    if(dp[n1][n2][k1][k2]!=-1)return dp[n1][n2][k1][k2];
    if(n1>0&&k1>0){
        x= calculate(n1-1,n2,k1-1,limit_h);
    }

    if(n2>0&&k2>0){
        y=calculate(n1,n2-1,limit_f,k2-1);
    }

    return dp[n1][n2][k1][k2]=(x+y)%M;
}
void solve()
{
    memset(dp,-1,sizeof(dp));
    ll n1,n2;
   cin>>n1>>n2>>limit_f>>limit_h;
    ll ans=calculate(n1,n2,limit_f,limit_h);
    cout<<ans<<endl;

}
int main() {
ll t;
t=1;
while(t--){
   solve();
}
return 0;
}