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
    string s;
    string ans1="",ans2="";
    cin>>s;int suvo=0,suvojit=0;
   int l=s.length();
    for(int i=0;i<=l-4;i++)
    {
        if(s[i]=='S' && s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O')
        suvo++;
    }
    for(int i=0;i<=l-7;i++)
    {
        if(s[i]=='S' && s[i+1]=='U'&&s[i+2]=='V'&&s[i+3]=='O'&&s[i+4]=='J'&&s[i+5]=='I'&&s[i+6]=='T')
        suvojit++;
    }

    
    cout<<"SUVO = "<<suvo-suvojit<<", "<<"SUVOJIT = "<<suvojit<<"\n";

}
return 0;
}