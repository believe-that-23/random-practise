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
//const ll N=1e5;


void solve()
{
   ll n,m;
   cin>>n>>m;
   //cout<<n<<" "<<m<<endl;
   string s[n];
   
   for(ll i=0;i<n;i++){
       cin>>s[i];
        //cout<<" "<<s<<endl;
      
   }
 //  cout<<v[0];

 ll left=m-1,right=0,up=n-1,down=0;
  for(ll i=0;i<n;i++){
      for(ll j=0;j<m;j++){

          if(s[i][j]=='1')
          {
              up=min(up,i);
              down=max(down,i);
              right=max(right,j);
              left=min(left,j);
          }
      }
  }
    for(ll i=up;i<=down;i++){
        for(ll j=left;j<=right;j++){
            if(s[i][j]!='1'){

                cout<<"NO"<<endl;return;
            }

        }
        
    }
    cout<<"YES"<<endl;
    
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}