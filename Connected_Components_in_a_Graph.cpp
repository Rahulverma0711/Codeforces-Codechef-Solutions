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
vector<int>vis;
void dfs(int node){
    vis[node]=1;
    for(auto i:g[node])
    {
      if(!vis[i])
      dfs(i);  
    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    g.resize(n+1);
    vis.assign(n+1,0);

    for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    g[a].pb(b);
    g[b].pb(a);

    }
    int cnt =0;
    for(int i=1;i<=n;i++)
    {
       if(!vis[i]){
        cnt++;
        dfs(i);}
    }
    cout<<cnt<<"\n";
}
int main()
{
ios_base :: sync_with_stdio(false);cin.tie(0);cout.tie(0);
//int _t; cin>>_t;while(_t--)
solve();
return 0;
}