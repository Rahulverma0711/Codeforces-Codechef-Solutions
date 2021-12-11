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
vector<bool>vis,helper;
int n,m;
bool isCyclic(int node){
    vis[node]=true;
    helper[node]=true;
    for(auto child:g[node]){
        if(helper[child]==true) return true;
        if(!vis[child]){
            if(isCyclic(child))
            return true;
        }
        helper[child]=false;
    }
    return false;
}
bool solve()
{
    for(int i=1;i<=n;i++){
       if(!vis[i]){
           if(isCyclic(i)) return true;
       }
    }
    return false;


}
int main()
{
ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
cin>>n>>m;
g.resize(n+1);
vis.assign(n+1,false);
helper.assign(n+1,false);
while(m--){
    int a,b;
    cin>>a>>b;
    g[a].push_back(b);
}
bool ans=solve();
cout<<ans<<endl;

return 0;
}