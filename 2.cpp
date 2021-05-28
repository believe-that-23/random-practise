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
//----------------------------------------------------------------------------
void solve()
{
   
   string m,n;
   cin>>m;
   cin>>n;
   map<char,ll> ml;
   set<char> s;
   set<char> s2;
   for(ll i=0;i<m.size();i++){
   	s.insert(m[i]);
   }
   for(ll i=0;i<n.size();i++){
   	s2.insert(n[i]);
   }
   for(auto c:s){
   	ml[c]++;
   }
   for(auto c:s2){
   	ml[c]++;
   }
   ll count=0;
   for(auto c:ml){
   	if(c.se==1){count++;}
   }

   cout<<count<<endl;


}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}