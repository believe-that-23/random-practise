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

int main() {
ll n;
cin>>n;
char a;
char b;
    
ll count;
for(ll i=0;i<n;i++){
    if(i%2==0){
        a='C';
        b='.';
    }
    else{
        a='.';
        b='C';
    }
    count=0;


    for(ll j=0;j<n;j++){
        if(j%2==0){cout<<a;count++}
        else cout<<b;
    }
    cout<<endl;
}
return 0;
}