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
    cin>>n;ll ans;
    vector<ll>a(n);
    for(auto &x:a)
    cin>>x;
    ll sum= accumulate(a.begin(),a.end(),0);
    //cout<<sum<<"\n";
  if(sum==n)
  cout<<"0\n";
  else if(sum>n)
  cout<<sum-n<<"\n";
  else
  cout<<"1\n";
  
   
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t; cin>>t;
while(t--)
{
solve();
}
return 0;
}