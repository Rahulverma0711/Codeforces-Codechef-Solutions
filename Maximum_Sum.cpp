#include <bits/stdc++.h>
using namespace std;
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
long long int n;
cin>>n;
long long sum=0;
long long count =0;
long long mx=INT_MIN;
for(long long i=0;i<n;i++)
{
    long long a;
    cin>>a;
    if(a>=0){
    sum+=a;
    count++;
    }
    
    mx=max(mx,a);
}
if(count)
cout<<sum<<" "<<count<<endl;
else
cout<<mx<<" "<<1<<endl;

return 0;
}