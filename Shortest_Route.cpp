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
        int n, m;
        cin >> n >> m;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        vector<int> b(n, -1);
        vector<int> c(n, -1);
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                b[i] = 0;
                if (i != n - 1)
                {
                    int j = i + 1;
                    int cnt = 1;
                    while (a[j] == 0)
                    {
                        b[j] = cnt;
                        cnt++;
                        j++;
                    }
                }
                else if (a[i] == 2)
                    b[i] = 0;
            }
        }

        //for(int i=0;i<n;i++)
        //  cout<<b[i]<<" ";
        // cout<<endl;

        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 2)
            {
                c[i] = 0;
                if (i != 0)
                {
                    int j = i - 1;
                    int cnt = 1;
                    while (a[j] == 0)
                    {
                        c[j] = cnt;
                        cnt++;
                        j--;
                    }
                }
                else if (a[i] == 1)
                    c[i] = 0;
            }
        }
        //for(int i=0;i<n;i++)
        // cout<<c[i]<<" ";
        // cout<<endl;
        while (m--)
        {
            int k;
            int ans;
            cin >> k;
            k--;
            if (b[k] == -1)
                ans = c[k];
            else if (c[k] == -1)
                ans = b[k];
            else
                ans = min(b[k], c[k]);
            cout << ans << " ";
        }
        cout <<"\n";
    }
    return 0;
}