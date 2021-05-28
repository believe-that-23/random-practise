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
void solve()
{
	ll n,e,h,a,b,c;
	cin>>n>>e>>h;
	vector<pair<ll,ll>> price
	for(ll i=0;i<3;i++){
		ll x;
		cin>>x;
		price.pb({x,i});
	}
	sort(all(price));
	for(auto c:price){
		ll om=0;ll cb=0;ll cc=0;
		if(c.se==0){
			om=e/2;
			cb=cb/2;
			
		}
		if(c.se==1){
			
		}
		if(c.se==2){
			
		}
	}
	// i have a price array 
	// i have knapsack of n
	//dp[i]->profit after taking a certain value
	
	if(price[0]<=price[1]){
		
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










