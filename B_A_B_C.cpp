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
   ll a,b,c;
   cin>>a>>b>>c;
//    if(a==0){
//        cout<<0<<endl;return;
//    }
   if(a==1){
       cout<<1<<endl;return;
   }
//    if(c==0)b=1;
//    if(b==0){
//        cout<<1<<endl;return;
//    }
   ll z=b%4;
   if(b==1){
       cout<<a%10<<endl;
       return;
   }
   if(z==0){
       if(a%2==1){
       cout<<1<<endl;return;
       }
       else{
           cout<<6<<endl;return;

       }
   }
   if(z==1){

       cout<<a%10<<endl;return;

   }
   if(z==2){
       if(c>1){
           if(a%2==1)
           {cout<<1<<endl;return;}

           cout<<6<<endl;return;
           
       }
       if(b>4){
           ll y=a%10;
           y*=y;
           y%=10;
           if(a%2==1){cout<<y%10<<endl;return;}
           //y=y%10;
           y*=6;
           cout<<y%10<<endl;return;
       }
       if(b==2){
           a%=10;
           a*=a;
           cout<<a%10<<endl;return;
       }
   }
   if(z==3){
       if(c%2==0){
           cout<<a%10<<endl;return;
       }
       else{
           ll y=a%10;
           ll m=y*y*y;
           cout<<m%10<<endl;
           return;
       }
   }
}
int main() {
ll t;
t=1;
while(t--){
   solve();
}
return 0;
}