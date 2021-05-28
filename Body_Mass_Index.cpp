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
   ll m,h;
   cin>>m>>h;
   ll bmi=m/(h*h);
   
   if(bmi<=18){cout<<1<<endl;return;}
   else if(bmi>18&&bmi<=24){cout<<2<<endl;return;}
   else if(bmi>24&&bmi<=29){cout<<3<<endl;return;}
   else cout<<4<<endl;
   
}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}