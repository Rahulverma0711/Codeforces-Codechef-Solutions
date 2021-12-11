#include <bits/stdc++.h>
using namespace std;
int f[1000000];
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--)
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[k];
    for(int i=0;i<1000000;i++)
    f[i]=0;
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        f[a[i]]++;
    }
    int cnt=0;vector<int>v;
    for(int i=0;i<=n;i++)
    {
        if(f[i]>1){
        cnt+=1;
        v.push_back(i);    
       }
    }
    cout<<cnt<<" ";
    for(auto i:v)
    cout<<i<<" ";
    cout<<"\n";
  
}
return 0;
}