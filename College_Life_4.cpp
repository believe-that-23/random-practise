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
const ll M=1e9+7;
void solve()
{
   ll N,E,H,A,B,C;
   cin>>N>>E>>H>>A>>B>>C;
   ll om=0;
   ll cm=0;
   ll cc=min(E,H);
   if(cc!=E){
       E=E-cc;
       om=E/2;
    }
    else{
        H=H-cc;
        cm=H/3;
    }
    cout<<om<<" "<<cm<<" "<<cc;

    ll total_items=om+cm+cc;
    if(N>total_items){
        cout<<-1<<endl;return;
    }
    ll min_cost=0;
    ll sasta=min(A,min(B,C));
    if(sasta==A&&om>0){
        if(om>=N)
        {min_cost=N*A;cout<<min_cost<<endl;return;}
        else    
           { min_cost=om*A;N=N-om;A=M;om=0;}
    }
    if(sasta==B&&cm>0){
        if(cm>=N)
        {min_cost=N*B;cout<<min_cost<<endl;return;}
        else
           { min_cost=cm*B;
                N=N-cm;B=M;cm=0;}
    }
    if(sasta==C&&cc>0){
        if(cc>=N)
        {min_cost=N*C;cout<<min_cost<<endl;return;}
        else    
            {min_cost=cc*C;N=N-cc;C=M;cc=0;}
    }
    sasta=min(A,min(B,C));
    if(sasta==A&&om>0){
        if(om>=N)
        {min_cost=N*A;cout<<min_cost<<endl;return;}
        else    
           { min_cost=om*A;N=N-om;A=M;om=0;}
    }
    if(sasta==B&&cm>0){
        if(cm>=N)
        {min_cost=N*B;cout<<min_cost<<endl;return;}
        else
           { min_cost=cm*B;
                N=N-cm;B=M;cm=0;}
    }
    if(sasta==C&&cc>0){
        if(cc>=N)
        {min_cost=N*C;cout<<min_cost<<endl;return;}
        else    
            {min_cost=cc*C;N=N-cc;C=M;cc=0;}
    }
    
    sasta=min(A,min(B,C));
    if(sasta==A&&om>0){
        if(om>=N)
        {min_cost=N*A;cout<<min_cost<<endl;return;}
        else    
           { min_cost=om*A;N=N-om;A=M;om=0;}
    }
    if(sasta==B&&cm>0){
        if(cm>=N)
        {min_cost=N*B;cout<<min_cost<<endl;return;}
        else
           { min_cost=cm*B;
                N=N-cm;B=M;cm=0;}
    }
    if(sasta==C&&cc>0){
        if(cc>=N)
        {min_cost=N*C;cout<<min_cost<<endl;return;}
        else    
            {min_cost=cc*C;N=N-cc;C=M;cc=0;}
    }


    
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}