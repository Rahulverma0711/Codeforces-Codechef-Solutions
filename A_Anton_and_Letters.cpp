//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
void solve()
{
    string s;
    getline(cin,s);int f[27];
    for(int i=0;i<27;i++)
    f[i]=0;
    int n=s.length();
    for(int i=0;i<n;i++)
    {
       if(s[i]=='{' || s[i]==' '|| s[i]==',')
       continue;
       if(f[s[i]-'a']==0)
       f[s[i]-'a']++;

    }
    int count=0;
    for(int i=0;i<=26;i++)
    {
        if(f[i]==1)
        count++;
    }
    cout<<count<<"\n";
}
signed main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

solve();

return 0;
}