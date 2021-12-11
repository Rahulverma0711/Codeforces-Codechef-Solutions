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
    int n;
    cin>>n;
    string num=to_string(n);
    if(n%21==0)
    cout<<"The streak is broken!"<<endl;
    else if(num.find("21")!=-1)
    cout<<"The streak is broken!"<<endl;
    else 
    cout<<"The streak lives still in our heart!"<<endl;
}
return 0;
}