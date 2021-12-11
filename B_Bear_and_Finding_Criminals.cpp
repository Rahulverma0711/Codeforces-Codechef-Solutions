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
    int n, k;
    cin >> n >> k;
    vi a(n);
    for (auto &x : a)
        cin >> x;
    int i = k - 1, j = k - 1, cnt = 0;
    while (i >= 0 && j < n)
    {
        if (i == j && a[i] == 1 && a[j] == 1)
            cnt += 1;
        else if (i != j && a[i] == 1 && a[j] == 1)
            cnt += 2;
        i--;
        j++;
    }
    while (i >= 0)
    {
        if (a[i] == 1)
            cnt++;
        i--;
    }

    while (j < n)
    {
        if (a[j] == 1)
            cnt++;
            
        j++;
    }
    cout << cnt << "\n";
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