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
        int n, k, f;
        cin >> n >> k >> f;
        long sum = 0;
        while (n--)
        {
            int s, e;
            cin >> s >> e;
            sum += (e - s);
        }
        if (f - sum >= k)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}