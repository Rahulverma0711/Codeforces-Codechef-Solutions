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
    vi ans;
    while(n>=10)
    {
        int ld=n%10;
        if(ld>=5)
        ld=9-ld;
        ans.pb(ld);
        n/=10;
    }
    //cout<<n<<endl;
    if(n>=5 && n!=9)
    ans.pb(9-n);
    else 
    ans.pb(n);
    

   for(int i=ans.size()-1;i>=0;i--)
   cout<<ans[i];
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
solve();
return 0;
}