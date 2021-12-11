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
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>a(n+2,0);
    
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        
        a[l]+=1;
        a[r+1]-=1;
    }
    for(int i=2;i<=n;i++){
        a[i]+=a[i-1];
    }
   
    vector<int>p(n+2,0);
    for(int i=1;i<=n;i++){
        if(a[i]>=k)
        p[i]+=1;
    }
    
   
    for(int i=1;i<=n;i++){
        p[i]+=p[i-1];
    }
     
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<p[r]-p[l-1]<<"\n";
    }
    

  

}
int main()
{
ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int _t; cin>>_t;while(_t--)
solve();
return 0;
}