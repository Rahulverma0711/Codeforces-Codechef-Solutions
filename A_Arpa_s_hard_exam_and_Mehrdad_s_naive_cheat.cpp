//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
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
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
ll n;
cin>>n;
if(n==0)
cout<<1;
else if(n%4==0)
cout<<6;
else if(n%4==1)
cout<<8;
else if(n%4==2)
cout<<4;
else if(n%4==3)
cout<<2;

}