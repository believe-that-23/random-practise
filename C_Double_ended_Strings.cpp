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
#define endl "\n"
ll C(ll n, ll k) {
    double res = 1;
    for (int i = 1; i <= k; ++i)
       res = res * (n - k + i) / i;
    return (ll)(res + 0.01);
}
vector<vll> readGraph(ll n,ll m){
    vector<vll> g(n);
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        //sc.read(a,b);
        //a--;b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    return g;
}
vector<vll> readTree(int n){
    return readGraph(n,n-1);
}
//----------------------------------------------------------------------------
void solve()
{
   string a,b;
   cin>>a>>b;
   ll dp[21][21];
   ll n=a.length();
   ll m=b.length();
   ll max_common=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            for(ll k=0;k<min(n-i,m-j);k++){
                if(a[i+k]!=b[j+k]){break;}
                max_common=max(max_common,k+1);
            }
        }
    }
    cout<<n+m-2*max_common<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}