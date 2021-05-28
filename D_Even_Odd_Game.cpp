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
   ll n;
   cin>>n;
   vll a(n);
   for(ll i=0;i<n;i++){
       cin>>a[i];
   }

   sort(all(a));
   reverse(all(a));

   ll alice=0;
   ll bob=0;
   //ll element=a[0];

   for(ll i=0;i<n;i++){
        if(i%2==0){
           if(a[i]%2==0){
               alice+=a[i];
           }

        }
        else{
            if(a[i]%2==1){
                bob+=a[i];
            }
        }
    }
    if(alice>bob)cout<<"Alice"<<endl;
    else if(alice==bob)cout<<"Tie"<<endl;
    else cout<<"Bob"<<endl;






}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}