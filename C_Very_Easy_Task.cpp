#include <bits/stdc++.h>
using namespace std;
int n,x,y;
bool good(long long m)
{
    m-=min(x,y);
    if(m<0) return false;
    else 
    return (m/x+m/y+1)>=n;
    
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

cin>>n>>x>>y;
long long l=0,h=1;
while(!good(h)) h*=2;
while(h-l>1)
{
    long long m=(h+l)/2;
    if(good(m))
    h=m;
    else 
    l=m;
}
cout<<h<<"\n";
return 0;
}