#include<bits/stdc++.h>
using namespace std;
typedef       long long int   ll;
typedef      long double   ld;
typedef     vector<ll>      vll;
#define     fi              first
#define     print(v)        for(ll i:v) cout<<i<<ss
#define     se              second
#define     pb              push_back
#define     nn              "\n"
#define     all(p)          p.begin(),p.end()
#define     zz(v)           (ll)v.size()
#define     S(a)            scanf("%lld",&a)
#define     SS(a,b)         scanf("%lld %lld",&a,&b)
#define     SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define     ss              ' '
#define     pii             pair<ll,ll>
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a*b)/gcd(a,b)
const double eps = 1e-7;

ll cal(vll v1,vll v2)
{
//     for(ll j:v1)
//    {
//        cout<<j<<ss;
//    }
//    cout<<nn;
//    for(ll j:v2)
//    {
//        cout<<j<<ss;
//    }
//    cout<<nn;

    ll n=zz(v1);
    ll m=zz(v2);
    map<ll,ll>mp;

    for(ll j:v1)
    {

        mp[j]=1;
    }
    ll cur=0;
    ll suf[m+10]= {0};
    for(ll j=m-1; j>=0; j--)
    {
        //cout<<mp[v2[j]]<<ss;
        if(mp[v2[j]]) cur++;

        suf[j]=cur;
    }

//    for(ll i=0;i<m;i++)
//    {
//        cout<<suf[i]<<ss;
//    }
//    cout<<nn;
    ll mx=0;
  //  cout<<2<<nn;
    for(ll i=0; i<m; i++)
    {
        ll z=upper_bound(all(v1),v2[i])-v1.begin();

        ll r=i,l=0;
        ll ans=0;
        while(l<=r)
        {
            ll mid=(l+r)/2;
            ll df=v2[i]-v2[mid]+1;
            if(df>z)
            {
                l=mid+1;
            }
            else
            {
                ans=i-mid+1;
                r=mid-1;
            }
        }

       // cout<<i<<ss<<z<<ans<<nn;

        mx=max(mx,ans+suf[i+1]);
    }

    return mx;



}


int main()
{
//
//    ios::sync_with_stdio(0);
//    cin.tie(0);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        vll pos1,pos2;
        vll neg1,neg2;

        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            if(a>0)
            {
                pos1.pb(a);
            }
            else
            {
                neg1.pb(-a);
            }
        }

        for(ll i=0; i<m; i++)
        {
            ll a;
            cin>>a;
            if(a>0)
            {
                pos2.pb(a);
            }
            else
            {
                neg2.pb(-a);
            }
        }

        sort(all(neg1));
        sort(all(neg2));

      //  cout<<1<<nn;

        cout<<cal(pos1,pos2)+cal(neg1,neg2)<<nn;


    }





}


/* Final check before submit :

1. array size or integer overflow,like uninitialised 0 index.

2. Think twice,code once.check all possible counter test case.

3. Be careful about corner case! n=1?k=1? something about 0?

4. avoid stupid mistake!complexity(t/m)?precision error?submit same code twice?

5. if got WA than remember that you are missing something common.
   *** Be confident!!! who knows? may be your one step back to AC ***
4. minus mod ans=(ans-k+mod)%mod;

*/


/* IF WA???

1. corner case! n=1?k=1? something about 0?

2. check code(avoid stupid mistake)

3. read the statement again(if there any missing point???)

4. check the idea(check all possible counter test case again!!!)

5. be calm,don't be panic!!!.(***this problem not going to decide your future***)

6. don't waste too much time. move to next problem

*/