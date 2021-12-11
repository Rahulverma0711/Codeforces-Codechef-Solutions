//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))

signed main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, x;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        x = sqrt(n);
        if (x * x == n)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}