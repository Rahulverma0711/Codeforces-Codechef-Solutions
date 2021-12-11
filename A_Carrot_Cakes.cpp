//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
void solve()
{
    int n,t,k,d,x;
    cin>>n>>t>>k>>d;
    int with=0,without=0,flag=0,flag2=0;int finwith,finwithout;
    for(int tt=1;;tt++)
    {
        if(tt%t==0)
        {
            with+=k;
            without+=k;
        }
        if(tt>d && (tt-d)%t==0)
        with+=k;
        
        if(with>=n && flag==0)
        {
            finwith=tt;
            flag=1;
        }
        if(without>=n && flag2==0)
        {
            finwithout=tt;
            flag2=1;
        }
        if(with>=n && without>=n)
        break;
    }
    if(finwith>=finwithout)
    cout<<"NO\n";
    else 
    cout<<"YES\n";
}
signed main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
solve();
return 0;
}