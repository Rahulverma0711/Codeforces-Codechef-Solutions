#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int n;
cin>>n;
map<string,int>mp;
while(n--)
{
    string s;
    cin>>s;
     if(!mp[s])
            {
                cout<<"OK"<<"\n";
                mp[s]++;
            }
            else
            {
                auto it=mp.find(s);
                cout<<it->first<<it->second<<"\n";
                mp[s]++;
                
            }
}
return 0;
}