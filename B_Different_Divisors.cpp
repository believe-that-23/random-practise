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
const ll N=1e4;

//vector<bool> is_prime(N+1, true);
bool is_prime(ll i){
    for(ll j=2;j*j<=i;j++){
        if(i%j==0){
            return false;
        }
    }
    return true;
}
void solve()
{
   ll d;
   cin>>d;
   ll x=1,y=0;
   //ll count=0;
  //ll ll i;
   for(ll i=1+d;;i++){
       if(is_prime(i)){
           x*=i;
           break;
       }
   }
   for(ll j=x+d;;j++){
       if(is_prime(j)){
           x*=j;
           break;
       }
   }
   cout<<x<<endl;

}
int main() {
    


ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}