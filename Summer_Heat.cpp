//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, a1, b1;
        cin >> a >> b >> a1 >> b1;
        int ans = (a1 / a) + (b1 / b);
        cout << ans << "\n";
    }
    return 0;
}