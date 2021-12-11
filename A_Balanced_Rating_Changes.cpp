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
    int n;
    cin>>n;
    bool flag=true;
    vector<int>a(n);
    for(auto &x:a)
     cin>>x;
    for(int i=0;i<n;i++){
        float k=(double)a[i]/2;
        if(a[i]%2){
            if(flag){
                a[i]=ceil(k);
                flag=false;
            }else{
                a[i]=floor(k);
                flag=true;
            }
        }else{
            a[i]=a[i]/2;
        }
    } 
    for(auto &x:a)
     cout<<x<<"\n";
   
}
int main()
{
ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
//int _t; cin>>_t;while(_t--)
solve();
return 0;
}