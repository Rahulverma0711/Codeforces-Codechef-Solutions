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
    int r1,c1,r2,c2,k;
    cin>>r1>>c1>>r2>>c2>>k;
    int moves=abs(r2-r1)+abs(c2-c1);
    
     if(moves>k)
     cout<<"NO"<<"\n";
     else if(moves==k)
     cout<<"YES"<<"\n";
     else{
         
         if(k%moves==0)
         cout<<"YES"<<"\n";
         else
         cout<<"NO"<<"\n";
     }
}
return 0;
}