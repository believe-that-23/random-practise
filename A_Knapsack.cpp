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
   ll n,W;
   ll sum=0;
   cin>>n>>W;
   vll ind;
   for(ll i=1;i<=n;i++){
       ll z;
       cin>>z;
       if(sum+z<=W){
           sum+=z;
           ind.pb(i);
       }
       else if(z<=W&&z>=(W+1)/2){//w+1/2 because it becomes aewsome for both odd and even
           sum=z;
           ind={i};
        }
   }
        if(sum>=(W+1)/2){
            cout<<ind.size()<<endl;
            for(ll i=0;i<ind.size();i++){
                cout<<ind[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
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