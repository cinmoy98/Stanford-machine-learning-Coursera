#include<bits/stdc++.h>
using namespace std;

//typedef

typedef long long ll;
typedef double dl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef set<int> si;
typedef set<ll> sl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<dl,dl> pdl;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;


//definition

 #define pb push_back
 #define eb emplace_back
 #define f first
 #define s second
 #define mp make_pair
 #define endl '\n'
 #define mod 1000000007
 #define mem(a,b) memset(a , b, sizeof(a))
 #define gcd(a,b) __gcd(a,b)
 #define lcm(a,b) ((a*b)/gcd(a,b))
 #define sqr(a) ((a) * (a))


 //constant


 const double PI = acos(-1);
 const double eps = 1e-9;


 //inline function


 inline bool isLeapYear(ll year) {return (year%4==0) || (year%400==0 && year%100!=0);}
 inline void normal(ll &a) {a%=mod; (a<0) && (a+=mod) ; }
 inline ll mod_mul(ll a,ll b) { a%=mod, b%=mod; normal(a),normal(b);return (a*b)%mod;}
 inline ll mod_add(ll a,ll b) { a%=mod, b%=mod; normal(a),normal(b);return (a+b)%mod;}
 inline ll mod_sub(ll a,ll b) { a%=mod, b%=mod; normal(a),normal(b); a-=b;normal(a) ; return a;}
 inline ll mod_pow(ll b,ll p) { ll r = 1;while(p){if(p&1) r=mod_mul(r,b);b = mod_mul(b,b);p>>=1;}return r;}
 inline ll mod_inverse(ll a) { return mod_pow(a,mod-2); }
 inline ll mod_div(ll a,ll b){ return mod_mul(a,mod_inverse(b)); }


 //functions


#define max 100000
ll mark[max];
ll fact[max];
ll seive()
{
    ll i,j,limit=sqrt(max)+1;
    mark[1]=1;mark[0]=1;
    for(i=4;i<max;i+=2)mark[i]=1;
    for(i=3;i<=limit;i+=2)
    if(!mark[i])
    for(j=i*i;j<=max;j+=2*i)
    mark[j]=1;
    /*    for(i=0;i<=100;i++)if(!mark[i])cout<<i<<endl;    */
}
ll factorial(ll n)
{
    while(n%2==0){n/=2;fact[2]++;}
    for(ll i=3;i<=sqrt(max)+1;i+=2)if(!mark[i])while(n%i==0){n/=i;fact[i]++;}
    /*     for(ll i=2;i<=max;i++)if(fact[i]!=0)cout<<"Factors:"<<i<<" "<<fact[i]<<endl;    */
}



