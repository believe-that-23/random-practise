#include <bits/stdc++.h>
#include <cmath>
#include <regex>
#define f first
#define s second
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
string mat[405];
ll n;
void solve() {
	cin >> n;
	
	vector<pair<ll, ll>> v;
	for (ll i = 0; i < n; i++) {
		cin >> mat[i];
		
		for (ll j = 0; j < n; j++) {
			if (mat[i][j] == '*') v.push_back({i, j});
		}
	}
	
	// cout << v << endl;
	
	if (v[0].f == v[1].f) {
		if (v[0].f == 0) {
			mat[v[0].f + 1][v[0].s] = mat[v[0].f + 1][v[1].s] = '*';
		} else {
			mat[v[0].f - 1][v[0].s] = mat[v[0].f - 1][v[1].s] = '*';
		}
	} else if (v[0].s == v[1].s) {
		if (v[0].s == 0) {
			mat[v[0].f][v[0].s + 1] = mat[v[1].f][v[0].s + 1] = '*';
		} else {
			mat[v[0].f][v[0].s - 1] = mat[v[1].f][v[0].s - 1] = '*';
		}
	} else {
		mat[v[0].f][v[1].s] = mat[v[1].f][v[0].s] = '*';
	}
	
	for (ll i = 0; i < n; i++) cout << mat[i] << '\n';
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