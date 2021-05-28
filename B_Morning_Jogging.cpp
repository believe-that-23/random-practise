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
#define FAST ios_base :: sync_with_stdio (false); cin.tie (NULL)
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
   ll n,m;
   cin>>n>>m;
   vector<vll> b(n);
   priority_queue<ll> pq;
    // vll v;
   for(ll i=0;i<n;i++){
      for(ll j=0;j<m;j++){
          ll z;
          cin>>z;
          b[i].pb(z);
         pq.push(-z);
      } 
   }
//    cout<<pq.top()<<endl;
    
//    vector<bool> vis(n);
   ll k=0;
   ll zz=m;
    set<pair<ll,ll>> last;
   while(zz--)
   {
    //    cout<<zz<<"zz";
       ll z=-pq.top();
    //    cout<<z<<"z";
       pq.pop();
       bool flag=false;
       for(ll i=0;i<n;i++){
          for(ll j=0;j<m;j++){
              if(b[i][j]==z){
                  if(last.count({i,j}))continue;
                  swap(b[i][j],b[i][k]);
                //   cout<<b[i][k]<<" ";
                  flag=true;
                  last.insert({i,k});
                //   cout<<last.fi<<" "<<last.se<<endl;
                  k++;
                  break;  
              }
          }
          if(flag){break;}
       }
   }

    // cout<<endl;
    // ll k=0; 
    // for(ll i=0;i<n;i++){
    //     ll z=min_element()
    // } 
   
   for(ll i=0;i<n;i++){
       for(ll j=0;j<m;j++){
           cout<<b[i][j]<<" ";
       }
       cout<<endl;
   }
}
int main() {
FAST;
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}