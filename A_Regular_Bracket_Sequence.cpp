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
   string s;
   cin>>s;
   ll c1=0;
   ll c2=0;
   if(s.front()==')'||s.back()=='('){cout<<"NO"<<endl;return;}
   if(s.size()%2==1){cout<<"NO"<<endl;return;}
   //for(ll i=0;i<s.size();i++){
    //   if(s[i]=='(')c1=i;
    //   if(s[i]==')')c2=j;
   //}
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