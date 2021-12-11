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
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t;
cin>>t;
while(t--)
{
    int D,d,a,b,c,ans;
    cin>>D>>d>>a>>b>>c;
    int td=D*d;
    if(td>=10 && td<21) 
    ans=a;
    else if(td>=21 && td<42)
    ans=b;
    else if(td>=42)
    ans=c;
    else
    ans=0;
    cout<<ans<<"\n";
}
return 0;
}