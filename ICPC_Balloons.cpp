//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))
void solve()
{
    int n;
    cin>>n;
    vi a(n);
    for(auto &x:a)
    cin>>x;bool flag1=false,flag2=false,flag3=false,flag4=false,flag5=false,flag6=false,flag7=false;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        flag1=true;
        else if(a[i]==2)
        flag2=true;
        else if(a[i]==3)
        flag3=true;
        else if(a[i]==4)
        flag4=true;
        else if(a[i]==5)
        flag5=true;
        else if(a[i]==6)
        flag6=true;
        else if(a[i]==7)
        flag7=true;
        if(flag1==true && flag2==true && flag3==true && flag4==true && flag5==true && flag6==true && flag7==true)
        {
            cout<<i+1<<"\n";
            break;
        }
       
    }
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int t; cin>>t;
while(t--)
{
solve();
}
return 0;
}