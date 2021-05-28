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
   ll n, m;
    cin >>n >>m;
    long long k;
    for (k=0; k*(k-1)/2<m; ++k);
    cout <<max(n-n, n-m*2) <<" " <<n-k <<endl;
}
int main() {
solve();


return 0;
}