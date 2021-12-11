#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <cctype>
#include <list>
#include <iterator>
#include<string.h>
#include<iomanip>
#include<limits>
using namespace std;
int freq[1000010];
int seive[1000010];
void createseive()
{
   
    
    int c;
    int N=1000000;
    for(int i=0;i<=N;i++)
    seive[i]=1;
    
    for(int i=2;i<=N/i;i++)
    {
        if(seive[i]==1)
        {
            c=1;
            for(int j=i*i;j<=N;j+=i)
            {
                if(seive[j]==1)
                {
                    seive[j]=0;
                    c++;
                   
                    
                }

            }freq[i]=c;
        }
    }
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);

createseive();
int t;
cin>>t;
while(t--)
{
 int n;cin>>n;
 cout<<freq[n]<<endl;
}
return 0;
}