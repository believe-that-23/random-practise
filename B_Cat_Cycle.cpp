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
   ll pos;
   k--;//zero based indexing
   if(n%2==0){
       pos=k%n;
        cout<<pos+1<<endl;return;

   }
   else{
       ll meet=n/2;//after every n/2 steps cat meet
       ll gap=k/meet;//total time when cat moves ahead for a given k
       pos=(gap+k)%n;
       cout<<pos+1<<endl;return;
   }
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}