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
    ll n;
    cin>>n;
    n=n*3;
    map<string,int> mpp;
   
    while(n--)
    {
        string x;int y; 
        cin>>x>>y;
        mpp[x]+=y;
    }
    vi a;
    for(auto it:mpp)
   a.pb(it.second);
    sort(a.begin(),a.end());
    for(auto &x:a)
    cout<<x<<" ";
    cout<<endl;
}
int main()
{
ios_base :: sync_with_stdio(false);cin.tie(0);cout.tie(0);
int _t; cin>>_t;while(_t--)
solve();
return 0;
}