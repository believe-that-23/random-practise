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
   long double a,b;
   cin>>a>>b;
   long double discount=(a-b)/a*100;
   cout<<discount;
}
int main() {
ll t;
t=1;
while(t--){
   solve();
}
return 0;
}