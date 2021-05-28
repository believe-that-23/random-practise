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
   ll a,b,c;
   cin>>a>>b>>c;
   ll sum=a+b+c;
   ll powerful_shots=sum/9;
   //har 7 round k baad ek minus ho rha h
    if(sum%9==0&&a>=powerful_shots&&b>=powerful_shots&&c>=powerful_shots)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}