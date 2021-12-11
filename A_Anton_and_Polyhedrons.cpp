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
}
int main()
{
ios_base :: sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
int n;
cin>>n;ll ans=0;
while(n--)
{
 string s;
 cin>>s;
 if(s=="Tetrahedron")
 ans+=4;
 else if(s=="Cube")
 ans+=6;
 else if(s=="Octahedron")
 ans+=8;
 else if(s=="Dodecahedron")
 ans+=12;
 else if(s=="Icosahedron")
 ans+=20;
}
cout<<ans<<"\n";
return 0;
}