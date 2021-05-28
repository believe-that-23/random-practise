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
   ll n,k;
   string s;
   cin>>n>>k>>s;
   ll goodness_score=0;
   for(ll i=0;i<n/2;i++){
       if(s[i]!=s[n-1-i])
         goodness_score++;
   }
   //cout<<goodness_score<<" ye";
   cout<<abs(k-goodness_score)<<endl;

}
int main() {
ll t;
cin>>t;
ll i=1;
while(t--){

    cout<<"Case #"<<i++<<": ";
   solve();
}
return 0;
}