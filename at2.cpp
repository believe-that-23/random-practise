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
const ll N=1e6;

vector<bool> visited(N,false);

vector<vll> adj(N);

ll fact(ll n){
	if(n==0||n==1)return 1;
	return n*fact(n-1);
}

vll degree(N,0);

ll dfs(ll v,ll ans) {
    visited[v] = true;
    ans*=fact(degree[v]-1);
    for (auto c : adj[v]) {
        if (!visited[c])
            dfs(c,ans);
    }
    return ans;
}



int main() {
    ll t;
    cin>>t;
    
    while(t--){
    ll n,k;
    cin>>n>>k;
    for(ll i=0;i<n-1;i++){
       ll u,v;
       cin>>u>>v;
       adj[u].pb(v);
       adj[v].pb(u);
    }
    
	for(ll i=0;i<=n;i++){
        degree[i]=adj[i].size();
    }
    
    
    vll dp(N,-1);
    vector<pair<ll,ll>> an;
    for(ll i=1;i<=n;i++){
        ll ans=1;
        ans*=fact(degree[i]);
        if(dp[degree[i]]!=-1){
            ans=dp[degree[i]];
            an.pb({ans,i});
            continue;
        }
        for(auto c:adj[i]){
            if(!visited[c]){
                ans*=dfs(c,ans);
            }
        }
        dp[degree[i]]=ans;
        an.pb({ans,i});
    }
    sort(all(an));
    reverse(all(an));
//    for(ll i=0;i<n;i++){
//    	cout<<an[i].se<<" "<<an[i].fi<<endl;
//	}
    cout<<an[k-1].se<<" "<<an[k-1].fi<<endl;
    }
    return 0;
}

