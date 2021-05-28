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
   ll p,a,b,c;
   cin>>p>>a>>b>>c;

   ll mina=(p%a==0)?p/a:p/a+1;
   ll minb=(p%b==0)?p/b:p/b+1;
   ll minc=(p%c==0)?p/c:p/c+1;
   mina=a*mina;
   minb=b*minb;
   minc=c*minc;

   mina=mina-p;
   minb=minb-p;
   minc=minc-p;

   ll ans=min(mina,min(minb,minc));
    cout<<ans<<endl;

}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}