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
bool check(ll n){
    set<ll> s;
   ll z=n;
   while(n){
       s.insert(n%10);
       n/=10;
   }
   s.erase(0);
   for(auto c:s){
       //cout<<"m:"<<v[i]<<endl;
       if(z%c!=0)
       {return false;}
   }

   return true;


}
void solve()
{
    ll n;
    cin>>n;

    ll k=n;
    while(k){
        if(k%10&&n%(k%10)){//k%10->last digit dega number ka
                            //n%(k%10)->check krega ki digit se divide ho rha hai ya nhi
            n++;//aage badho
            k=n;
        }
        else{
            k=k/10;//next digit test kro ya zero ho last digit
        }
    }

    cout<<n<<endl;



}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}