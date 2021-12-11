//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
void solve()
{
    int n, k;
    cin >> n >> k;
    int mx = (n - 1) / 2;
    if (k > mx)
    {
        cout << "-1\n";
        return;
    }
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        a[i] = i + 1;
    for (int i = 1; i <= n; i += 2)
    {
        if (k == 0)
            break;
        k--;
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
    }
    for (int &x : a)
        cout << x << " ";
    cout << "\n";
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