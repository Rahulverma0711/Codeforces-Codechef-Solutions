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
int n;
vector<vector<char>>grid;
vector<vector<bool>>vis;
vector<vector<int>>dis;
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
bool check(int x,int y){
    if(x>=0 && x<n && y>=0 && y<n && vis[x][y]==false && grid[x][y]!='T') return true;
    return false;
}
void bfs(int x,int y){
    queue<pair<int,int>>q;
    q.push({x,y});
    vis[x][y]=true;
    while(!q.empty()){
        int currx=q.front().first;
        int curry=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            if(check(currx+dx[i],curry+dy[i])){
                int newx=currx+dx[i];
                int newy=curry+dy[i];
                q.push({newx,newy});
                vis[newx][newy]=true;
                dis[newx][newy]=dis[currx][curry]+1;
            }
        }
    }
   
    
}
void solve()
{
    cin>>n;
    int srcx,srcy,endx,endy;
    grid.resize(n,vector<char>(n));
    vis.assign(n,vector<bool>(n,false));
    dis.assign(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
            if(grid[i][j]=='S')
            {
                srcx=i;
                srcy=j;
            }
            if(grid[i][j]=='E')
            {endx=i;endy=j;}
        }
    }
     bfs(srcx,srcy);
 

    
  
   cout<<dis[endx][endy]<<"\n";
    
}
int main()
{
ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int _t; cin>>_t;while(_t--)
solve();
return 0;
}