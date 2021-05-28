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
   ll n;
   cin>>n;
   vll a(n);
   set<ll> s;
   map<ll,ll> m;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        s.insert(a[i]);}
   if(n==2||s.size()==1){
       cout<<0<<endl;return;
   }
   ll c2=-1;
   set<ll> s1;
   for(ll i=0;i<n-1;i++){
       if(a[i+1]>a[i]){
           c2=a[i+1]-a[i];
            s1.insert(c2);
        }
   }
   if(s1.size()>1){
       cout<<-1<<endl;
       return;
   }
   if(c2==-1){
       cout<<-1<<endl;return;
   }
   auto x=max_element(all(a))-a.begin();
   ll m;
   if(x+1==n){
       m=a[x]+c2-a[x-1];
   }
   else{
       m=a[x]+c2-a[x+1];
   }
   //ll m=a[x]+c2-(x+1==n)?a[x-1]?a[x+1];
   //cout<<m<<"m"<<endl;
   if(m<=a[x]){
       cout<<-1<<endl;return;
   }

    bool check=true;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i+1]==(a[i]+c2)%m){continue;}
        else {
            check=false;break;
        }
    }
    if(check)cout<<m<<" "<<c2<<endl;
    else cout<<-1<<endl;;



}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}