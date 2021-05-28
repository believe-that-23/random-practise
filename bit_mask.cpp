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
	ll n,m;
	cin>>n>>m;//m is the target sum;;
	vll a(n);
	for(ll i=0;i<n;i++)cin>>a[i];
	ll sum=0;
	bool possible=false;
	for(ll mask=0;mask<(1<<n);mask++){
		sum=0;
		for(ll i=0;i<n;i++){
			if(mask&(1<<i)){
				sum+=a[i];
			}
		}
		if(sum==m){
			possible=true;
			break;
		}
	}
	if(possible)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
int main() {
ll t;
t=1;
while(t--){
   solve();
}
return 0;
}

