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
int n,m;
vector<vector<int>>g;
vector<bool>vis;
vector<int>dis;
void dfs(int node,int d){
    vis[node]=true;
    for(auto v:g[node]){
        if(!vis[v]){
            dis[v]=dis[node]+1;
            dfs(v,dis[node]+1);
        }
    }
}

void solve()
{
    cin>>n>>m;
    g.resize(n+1);
    vis.assign(n+1,false);
    dis.assign(n+1,0);
    while(m--){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
   dfs(2,dis[2]);
    for(int i=1;i<dis.size();i++){
        cout<<dis[i]<<" ";
    }


}
int main()
{
ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int _t; cin>>_t;while(_t--)
solve();
return 0;
}