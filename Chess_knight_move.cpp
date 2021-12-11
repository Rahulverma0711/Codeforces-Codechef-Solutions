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
char col[]={'a','b','c','d','e','f','g','h'};
int grid[8][8];
vector<vector<int>>dis;
vector<vector<bool>>vis;
int dx[]={-2,-2,-1,-1,1,2,2,1};
int dy[]={-1,1,2,-2,-2,-1,1,2};
bool check(int x,int y){
    if(x>=0 && x<8 && y>=0 && y<8 && vis[x][y]==false)return true;
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
        for(int i=0;i<8;i++){
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
    dis.assign(8,vector<int>(8,0));
    vis.assign(8,vector<bool>(8,false));
   string st,en;
   cin>>st>>en;
   char s=st[0];char e=en[0];
   int sty,eny;
   int stx=st[1]-'0';
   int enx=en[1]-'0';
   stx--;enx--;
   
   for(int i=0;i<8;i++){
       if(s==col[i]) sty=i;   
       if(e==col[i])eny=i;
   }
   //cout<<stx<<" "<<sty<<endl;
   //cout<<enx<<" "<<eny<<endl;
   bfs(stx,sty);
   cout<<dis[enx][eny]<<endl;
}
int main()
{
ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
int _t; cin>>_t;while(_t--)
solve();
return 0;
}