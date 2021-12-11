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
vector<vector<int>>g;
vector<bool>vis;
int n,m;
bool cycleDetection(int node ,int parent){
    vis[node]=true;
    for(auto child:g[node]){
        if(!vis[child]){
            if(cycleDetection(child,node))
            return true;
        }
        else if(child!=parent)
        return true;
    }
    return false;
}

bool solve()
{
   
    for(int i=1;i<=n;i++){
        if(!vis[i]){
           if(cycleDetection(i,-1))
           return true;
        }
    }
    return false;

}
int main()
{
ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int _t; cin>>_t;while(_t--)
cin>>n>>m;
    vis.assign(n+1,false);
    g.resize(n+1);
 

    while(m--){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
bool ans=solve();
cout<<ans; 

return 0;
}