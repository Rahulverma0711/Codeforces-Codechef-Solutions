//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
string multiply(string num1,string num2)
{
    int l1=num1.length();
    int l2=num2.length();
    int res[l1+l2];
    for(int i=0;i<l1+l2;i++)
        res[i]=0;
    int i=l2-1;
    int pf=0;
    while(i>=0)
    {
        int ival=num2[i]-'0';
        i--;
        int carry=0;
        int k=l1+l2-1-pf; 
        int j=l1-1;  
        while(j>=0 || carry!=0)
        {
            int jval=num1[j]-'0';
            int prod=ival*jval+carry+res[k];
            res[k]=prod%10;
            carry=prod/10;
            k--;
            j--;
        }
        pf++;

     }
     int a=0;
     
     string str;
     while(res[a]==0)
       a++;
    for(;a<l1+l2;a++)
    {
        str.push_back(res[a]+'0');
    }
    return str;
     
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t=2;
while(t--){
string num1,num2;
cin>>num1>>num2;
string ans=multiply(num1,num2,res);
cout<<ans<<"\n";
}
return 0;
}