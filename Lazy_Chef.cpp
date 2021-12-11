#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--)
{
    int x,m,d;
    cin>>x>>m>>d;
    int ans=min(x*m,x+d);
    cout<<ans<<"\n";
}
return 0;
}