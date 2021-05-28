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
   ll n;
   string s;
   cin>>n>>s;
   ll count=0;
   reverse(all(s));
   ll i=0;
   while(s[i]){
       if(s[i]==')'){
       count++;
       }
       else break;

       i++;

   }
   ll bachi=n-count;
   if(count>bachi){
       cout<<"YES"<<endl;

   }
   else
    cout<<"NO"<<endl;

}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}