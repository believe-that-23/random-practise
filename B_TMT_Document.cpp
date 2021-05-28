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
   string s;
   cin>>s;
   ll ct=0;
   ll cm=0;
   stack<char> st,ss;
   bool flag=true;
   for(ll i=0;i<n;i++){
       if(s[i]=='T'){
           ct++;
       }
       else{
           cm++;
       }
   }
   if(ct!=2*cm){
       cout<<"NO"<<endl;
       return;
   }
   ll z=cm;
   for(ll i=0;i<n;i++){
       if(s[i]=='T'){st.push('T');}
       else{
           if(st.empty()){flag=false;break;}
           st.pop();
           z--;
       }
       if(z==0)break;

   }
   z=cm;
   for(ll i=n-1;i>=0;i--){
       if(s[i]=='T'){ss.push('T');}
       else{
           if(ss.empty()){flag=false;break;}
           ss.pop();
           z--;
       }
       if(z==0)break;
   }
   if(flag==false){
       cout<<"NO"<<endl;
       return;
   }
   cout<<"YES"<<endl; 
//    cout<<ss.size()<<" "<<st.size();
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