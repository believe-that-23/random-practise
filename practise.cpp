#include <bits/stdc++.h>

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ll long long
#define all(x) (x).begin(),(x).end()
#define vll vector<long long int>
using namespace std;
//----------------------------------------------------------------------------
void solve()
{
   ll e;
   cin>>e;
   vector<pair<ll,ll>> a(e);
   set<ll> s;
   for(ll i=0;i<e;i++){
   		ll x, y;
   		cin>>x>>y;
   		s.insert(x);
   		s.insert(y);
   		a[i]={x,y};
   }
   int cnt=0;
   for(ll i=0;i<e;i++){
   	for(ll j=0;j<e;j++){
   	if(a[i]!=a[j]){cnt++;}
   	}
	}

   cout<<s.size()<<endl;


   
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}