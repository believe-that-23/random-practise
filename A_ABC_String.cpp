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
vector<vll> readGraph(ll n,ll m){
    vector<vll> g(n);
    for(ll i=0;i<m;i++){
        ll a,b;
        cin>>a>>b;
        //sc.read(a,b);
        //a--;b--;
        g[a].pb(b);
        g[b].pb(a);
    }
    return g;
}
vector<vll> readTree(int n){
    return readGraph(n,n-1);
}
//----------------------------------------------------------------------------
bool areBracketsBalanced(string expr) 
{   
    stack<char> s; 
    char x; 
  
    // Traversing the Expression 
    for (int i = 0; i < expr.length(); i++)  
    { 
        if (expr[i] == '(')  
        { 
            // Push the element in the stack 
            s.push(expr[i]); 
            continue; 
        } 
  
        // IF current current character is not opening 
        // bracket, then it must be closing. So stack 
        // cannot be empty at this point. 
        if (s.empty()) 
            return false; 
  
        if(expr[i]==')')s.pop(); 
    } 
  
    // Check Empty Stack 
    return (s.empty()); 
}
void solve()
{
   string s;
   cin>>s;
   ll n=s.size();
   ll a=0,b=0,c=0;
    char aa=s[0];
    char bb=s[n-1];
    char bacha='0';
  if(s[0]==s[n-1]){cout<<"NO"<<endl;return;}
   for(ll i=0;i<n;i++){
       if(s[i]==aa){s[i]='(';a++;}
       else if(s[i]==bb){s[i]=')';b++;}
       else{
           bacha=s[i];c++;
       }
    }
    //if(a%2!=0||b%2!=0)
   // cout<<bacha;
   if(a>b+c||b>a+c){cout<<"NO"<<endl;return;}
   if(a==b&&c>0){cout<<"NO"<<endl;return;}
   if(a>b){
       for(ll i=0;i<n;i++){
           if(s[i]==bacha){s[i]=')';}

       }
   }
   if(a<b){
       for(ll i=0;i<n;i++){
           if(s[i]==bacha){s[i]='(';}

       }
   }
   ll x=0,y=0;
   //cout<<s<<endl;
   bool flag=0;
   flag=areBracketsBalanced(s);
   if(flag==1){
       cout<<"YES"<<endl;
   }
   else{
       cout<<"NO"<<endl;
   }
  /* for(ll i=0;i<n;i++){
       x=0;y=0;
       if(s[i]==')'){cout<<"NO"<<endl;return;}
       if(s[i]=='('){
           while(s[i]=='('){
               x++;
               i++;
               
           }
           while(s[i]==')'){
               y++;
               i++;
               
           }
       }
       if(x!=y){
               flag=1;break;
        }
        i--;
        
   }
   if(flag==1)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;*/


   
 /*  cout<<s<<endl;
  ll sum=a+b+c;
   ll x=max(a,max(b,c));
   ll y=min(a,min(b,c));
   ll z=sum-(x+y);
   if(x==y+z)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;*/

}
int main() {
ll t;
cin>>t;
while(t--){
   solve();
}
return 0;
}