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
long n;
cin>>n;
int arr[n];
for(long i=0;i<n;i++)
cin>>arr[i];
int k;
cin>>k;
for(int i=0;i<n;i++)
{
    if(arr[i]==k)
    {
        cout<<i<<"\n";
        break;
    }
}
return 0;
}