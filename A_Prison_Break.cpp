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
ll sum(ll n){
    if(n==0)return 0;
    ll sum=n*(n+1)/2;
    return sum;

}
void solve()
{
    ll n,m,r,c;
    cin>>n>>m>>r>>c;
   
    ll upar=0,niche=0,right=0,left=0;
    upar=n-r;
    niche=n-upar-1;
    right=m-c;
    left=m-right-1;
    ll sum=max(upar,niche)+max(right,left);
    cout<<sum<<endl;

}
int main() {
ll t;
cin>>t;
while(t--){
    solve();
}
return 0;
}