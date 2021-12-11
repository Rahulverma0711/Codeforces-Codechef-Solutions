#include <bits/stdc++.h>
using namespace std;
int N=100000;
int seive[1000000];
void createSeive()
{
    
    for(int i=2;i<=N;i++)
    seive[i]=1;
    
    for(int i=2;i<=N/i;i++)
    {
        if(seive[i]==1)
        {
            for(int j=i*i;j<=N;j=j+i)
            {
                seive[j]=0;
            }
        }
    }
}
void segmentedSeive()
{
    createSeive();
    int l,r;
    vector<int>prime;
    cin>>l>>r;
    for(int i=2;i*i<=r;i++)
    {
        if(seive[i]==1)
        prime.push_back(i);
    }
    int dummy[r-l+1];
   for(int i=0;i<r-l+1;i++)
   dummy[i]=1;
   for(auto pr:prime)
   {
       int firstmultiple=(l/pr)*pr;
       if(l%pr) firstmultiple+=pr;
       for(int j=max(firstmultiple,pr*pr);j<=r;j+=pr)
       {
           dummy[j-l]=0;
       }
   }
 
   for(int i=l;i<=r;i++)
   {
      if(i!=1){
       if(dummy[i-l]==1)
       cout<<i<<"\n";
      }
       
   }
   


}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--)
{
    segmentedSeive();
    cout<<"\n";
}
return 0;
}