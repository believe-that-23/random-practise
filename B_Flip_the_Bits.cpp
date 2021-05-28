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
   ll n;
   cin>>n;
   string s,ss;
   cin>>s>>ss;
   vll max_change;
   ll c1=0;
   ll c0=0;
   string ss2=ss;
    for(ll i=0;i<ss2.size();i++){
            if(ss2[i]=='0')ss2[i]='1';
            else ss2[i]='0';
        }
   for(ll i=0;i<n;i++){
       if(s[i]=='0')c0++;
       else c1++;
       if(c1==c0&&c1>0)max_change.pb(i);
   }
   if(max_change.size()==0&&s==ss){
       cout<<"YES"<<endl;
       return;
   }
   if(max_change.size()==0&&s!=ss){
       cout<<"NO"<<endl;
       return;
   }
   for(ll i=max_change.back()+1;i<n;i++){
       if(ss[i]!=s[i]){
           cout<<"NO"<<endl;
           return;
       }
   }
   if(max_change.size()==1){
       string sss=s.substr(0,max_change.front());
       string sss1=ss.substr(0,max_change.front());
       string sss2=ss2.substr(0,max_change.front());
       if(sss!=sss1&&sss!=sss2){
           cout<<"NO"<<endl;
           return;
       }
   }
//   cout<<"YES"<<endl;
    bool check=false;
    
    for(ll i=1;i<max_change.size();i++){
       ll u=max_change[i-1]+1;
       ll v=max_change[i]-max_change[i-1];
        string sss=s.substr(u,v);
        string sss1=ss.substr(u,v);
        if(sss==sss1){
            continue;
        }
        sss1=ss2.substr(u,v);
        // cout<<sss<<"//"<<sss1;
        if(sss==sss1){
            continue;
        }
         
        check=true;
        break;
    }
    if(check==false)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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