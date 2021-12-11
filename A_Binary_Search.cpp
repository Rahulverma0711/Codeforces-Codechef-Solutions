#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
    {
        int x;
        cin >> x;
        int l = 0, h = n - 1;
        bool check = false;
        while (h >= l)
        {
            int m = (h + l) >> 1;
            if (a[m] == x)
            {
                check = true;
                break;
            }
            else if (a[m] > x)
            {
                h = m - 1;
            }
            else
                l = m + 1;
        }
        if (check)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }
    return 0;
}