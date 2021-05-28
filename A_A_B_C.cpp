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
   ll k;
   cin>>k;
   for( ll i=1;i<k;i++){
      for(ll j=1;j<k;j++){
         for(ll z=1;z<k;z++){
            if(i*j*k<=k)
            cout<<i<<" "<<j<<" "<<k<<endl;
         }
      }
   }
  
}
int main() {
solve();

return 0;
}