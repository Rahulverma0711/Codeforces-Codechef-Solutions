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
vector<vector<int>>grid;
int n,m;
vector<vector<bool>>vis;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
bool check(int x,int y){
  if(x>=0 && x<n && y>=0 && y<m)return true;
  return false ;
}
void dfs(int x,int y)
{
    vis[x][y]=true;
    cout<<grid[x][y]<<endl;
    for(int i=0;i<4;i++){
        if(check(x+dx[i],y+dy[i])&& vis[x+dx[i]][y+dy[i]]==false){
            dfs(x+dx[i],y+dy[i]);
        }
    }
}
void solve()
{
   cin>>n>>m;
   grid.resize(n,vector<int>(m));
   vis.resize(n,vector<bool>(m,false));
   for(int i=0;i<n;i++)
   for(int j=0;j<m;j++)
   cin>>grid[i][j];
  
   dfs(0,0);
   


  
}
int main()
{
ios_base :: sync_with_stdio(false);cin.tie(0);cout.tie(0);
//int _t; cin>>_t;while(_t--)
solve();
return 0;
}