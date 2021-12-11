//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
void solve()
{
    ll a,b;cin>>a>>b;
    if(__gcd(a,b)>1)
    cout<<0<<"\n";
    else if(__gcd(a+1,b)>1 || __gcd(a,b+1)>1)
    cout<<1<<"\n";
    else 
    cout<<2<<"\n";

    
}
int main()
{
ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int _t; cin>>_t;while(_t--)
solve();
return 0;
}