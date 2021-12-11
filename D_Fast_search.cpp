#include <bits/stdc++.h>
using namespace std;
int left(vector<int>&a,int x,int n)
{
    int h=n,l=-1;
    while(h-l>1)
    {
        int m=(h+l)>>1;
        if(a[m]>=x)
        h=m;
        else
        l=m;
    }
    return h;
}
int right(vector<int>&a,int x,int n)
{
    int h=n,l=-1;
    while(h-l>1)
    {
        int m=(h+l)>>1;
        if(a[m]<=x)
        l=m;
        else
        h=m;
    }
    return l;
    
}

int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int  n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
cin>>a[i];
sort(a.begin(),a.end());
int t;
cin>>t;
while(t--)
{
    int L,R;
    cin>>L>>R;
    int l=left(a,L,n);
    int r=right(a,R,n);
    int ans=r-l+1;
    cout<<ans<<" ";

}
return 0;
}