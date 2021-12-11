//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
#define ll long long 
int  main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int a[4];
for(int i=0;i<4;i++)
cin>>a[i];
string s;
cin>>s;
ll sum=0;
int n = s.length();
for(int i=0;i<n;i++)
{
    if(s[i]=='1')
    sum+=a[0];
    else if(s[i]=='2')
    sum+=a[1];
    else if(s[i]=='3')
    sum+=a[2];
    else 
    sum+=a[3];
}
cout<<sum<<"\n";
return 0;
}