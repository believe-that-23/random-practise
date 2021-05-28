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
   ll n,k;
   cin>>n>>k;
   if(k==0){cout<<n<<endl;return;}
   n=n%k;
   cout<<n<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}