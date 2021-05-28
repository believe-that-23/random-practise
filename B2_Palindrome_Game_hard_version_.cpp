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
bool is_palindrome(string s)
{
    string str=s;
    reverse(all(str));
    return s==str;
}
void solve()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   ll cnt=0;
   for(ll i=0;i<n;i++){
       if(s[i]=='0')cnt++;
   }
   if(is_palindrome(s)){
   if(n%2==0){
       cout<<"BOB"<<endl;
       return;
   }
   if(cnt>1&&s[n/2]=='0'){
       cout<<"ALICE"<<endl;
       return;
   }
   cout<<"BOB"<<endl;
   return;
   }
   if(cnt==2&&n%2==1&&s[n/2]=='0'){
       cout<<"DRAW"<<endl;

   }
   else cout<<"ALICE"<<endl;


   
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