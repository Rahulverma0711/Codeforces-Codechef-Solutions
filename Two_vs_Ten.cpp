//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
void solve()
{
    int n;
    cin >> n;
    if (n % 5 != 0)
    {
        cout << "-1\n";
        return;
    }
    int count = 0;
    while (n % 10 != 0)
    {
        n = n * 2;
        count++;
    }
    cout << count << "\n";
}
signed main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}