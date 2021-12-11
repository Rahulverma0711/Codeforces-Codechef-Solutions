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
        int l = -1, h = n;
        while (h - l > 1)
        {
            int m = (h + l) >> 1;
            if (a[m] < x)
                l = m;
            else
                h = m;
        }
        cout << h + 1 << "\n";
    }
    return 0;
}