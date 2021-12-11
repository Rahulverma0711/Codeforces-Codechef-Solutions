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
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
void solve()
{
    ll n, q;
    cin >> n >> q;
    vi a(n);
    for (auto &x : a)
        cin >> x;
    while (q--)
    {
       
        
            ll z, l, r, x;
            cin>>z;
            if(z==1){
            cin >> l >> r >> x;
            l--;
            r--;
            for (ll i = l; i <= r; i++)
                a[i] += abs((x + i - l) * (x + i - l));
            }
        else
        {
            ll k;
            cin >> k;
            k--;
            ll ans = a[k];
            cout << ans << endl;
        }
    }
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int _t; cin>>_t;while(_t--)
    solve();
    return 0;
}