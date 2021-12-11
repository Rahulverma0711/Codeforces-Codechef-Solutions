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
    int n,q;
    cin>>n>>q;
    vector<int>a(n);
    for(auto &x:a)
    cin>>x;
    sort(a.begin(),a.end());
   
    while(q--)
    {
       
        ll x, index;
        cin>>x;
        index=lower_bound(a.begin(),a.end(),x)-a.begin();
        cout<<index<<endl;
       if(index<n && a[index]==x)
       cout<<"0\n";
       else if(index%2==0)
       cout<<"POSITIVE\n";
       else 
       cout<<"NEGATIVE\n";
    }
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
solve();
return 0;
}