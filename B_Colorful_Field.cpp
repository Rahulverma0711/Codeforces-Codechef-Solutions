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
    int n, m, w, q;
    cin >> n >> m >> w >> q;
    vi v;
    while (w--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        int pos = x * m + y;
        v.pb(pos);
    }
    sort(v.begin(), v.end());
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        int pos = x * m + y;
        int f = 0, k = 0;
        for (auto &x : v)
        {
            if (x < pos)
                k++;
            else if (x == pos)
            {
                f = 1;
            }
            else
                break;
        }
        pos -= k;
        pos = pos % 3;
        if (f)
            cout << "Waste\n";
        else if (pos == 1)
            cout << "Carrots\n";
        else if (pos == 2)
            cout << "Kiwis\n";
        else
            cout << "Grapes\n";
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