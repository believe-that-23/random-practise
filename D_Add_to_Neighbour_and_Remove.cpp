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

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n);
  ll sum = 0;
  for (ll &x : a) {
    cin >> x;
    sum += x;
  }

  for (int i = n; i >= 1; i--) {
    if (sum % i == 0) {
      ll needSum = sum / i;//sum after i operations
      ll curSum = 0;
      bool ok = true;
      for (int j = 0; j < n; j++) {
        curSum += a[j];
        if (curSum > needSum) {// if current sum exceeds then it cant be answer
          ok = false;
          break;
        } else if (curSum == needSum) {
          curSum = 0;
        }
      }

      if (ok) {
        cout << n - i << endl;//no. of elements left after i operations
        
        return;
      }
    }
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