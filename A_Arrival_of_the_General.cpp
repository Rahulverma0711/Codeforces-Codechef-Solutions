#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int min = arr[0];
    int max = arr[0];
    int mn = 0, mx = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            mx = i;
        }
        if (arr[i] <= min)
        {
            min = arr[i];
            mn = i;
        }
    }
    if (mx > mn)
        ans = mx + (n - 1) - mn - 1;
    else
        ans = mx + (n - 1) - mn;
    cout << ans << "\n";

    return 0;
}