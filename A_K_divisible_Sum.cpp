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
   ll n,k;
   cin>>n>>k;
   ll i=2;
   ll z=k;
    if(k<n){
        k=n%k==0?n:n+n%k;
     }
   if(n==k){cout<<1<<endl;return;}
   //agar number bada ha to k ka 2
   //4,3 6 divided by four dga 1.something to 
   //ceil ha answer
   //11,5 15/11 ka ceil h- 2 4*2+1+1
   
    cout<<(k%n==0?k/n:k/n+1)<<endl;return;


   
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}