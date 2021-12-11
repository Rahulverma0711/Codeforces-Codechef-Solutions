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
    string s;
    cin>>s;
    int l=s.length();
    if(s.length()<=3)
    {
        cout<<"Error\n"<<endl;
        return;
    }
    if(s[0]!='<' || s[1]!='/' || s[l-1]!='>')
    {
        cout<<"Error\n";
        return;
    }
    for(int i=2;i<l-1;i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9') )
        continue;
        else 
        {
            cout<<"Error\n";
            return;
        }

    }
    cout<<"Success\n";
}
int main()
{
ios_base :: sync_with_stdio(false);cin.tie(0);cout.tie(0);
int _t; cin>>_t;while(_t--)
solve();
return 0;
}