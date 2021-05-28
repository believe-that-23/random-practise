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
ll fact(ll n){
    if(n==1||n==0)return 1;
    return n*fact(n-1);
}
//----------------------------------------------------------------------------
void solve()
{
   ll n;
   cin>>n;
   vll r(n);
   vll b(n);
   string a,c;
   cin>>a>>c;
   
   for(ll i=0;i<a.size();i++){
       r[i]=a[i]-'0';
       
   }
   for(ll i=0;i<c.size();i++){
       b[i]=c[i]-'0';
   }

    ll na=0;
    ll nb=0;
   
   //char winner='n';
   ll countr=0;
   ll countb=0;
   for(ll i=0;i<n;i++){
       if(r[i]>b[i])countr++;
       if(r[i]<b[i])countb++;
   }   


       
       
   if(countr==countb){cout<<"EQUAL"<<endl;}
   else if(countr>countb){cout<<"RED"<<endl;}
   else cout<<"BLUE"<<endl;
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}