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
   vll v(10);
   v[0]=3;
   v[1]=7;
   v[2]=13;
   v[3]=103;
   v[4]=1003;
   v[5]=10003;
   v[6]=100003;
   v[7]=1000003;
   v[8]=10000003;
   v[9]=100000003; 
   ll a,b,c;
   cin>>a>>b>>c;
   ll x=-1,y=-1;
   if(a<b){
       y=1;
       for(ll i=1;i<b;i++){
           y*=10;
       }
       if(c==1){
           x=v[a];
       }
       else if(c>1&&c<a){
           x=v[c-1];
           for(ll i=0;i<c;i++){
               x*=10;
           }
       }
       else{
            x=v[a-c];
            for(ll i=1;i<c;i++){
            x*=10;
            }
       }
   }
   if(a==b&&b==c){
       x=1,y=1;
       for(ll i=1;i<a;i++){
           x*=10;
           y*=10;
       }
   }
   if(a==b&&c<a){
       y=1;
       for(ll i=1;i<a;i++){
           y*=10;
       }
       x=v[a-c+1];
       for(ll i=1;i<c;i++){
           x*=10;
       }
   }
   if(a>b){
       x=1;
       for(ll i=1;i<a;i++){
           x*=10;
       }
        if(c==1){
           y=v[b];
       }
       else if(c>1&&c<b){
           y=v[c-1];
           for(ll i=0;i<c;i++){
               y*=10;
           }
       }
       else{
            y=v[b-c];
         for(ll i=1;i<c;i++){
           y*=10;
       }
       }

   }




   cout<<x<<" "<<y<<endl;  
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