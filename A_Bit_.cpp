//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
//#define int long long
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
void solve()
{
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;
    string s;
    while (n--)
    {

        cin >> s;
        if (s[1] == '+')
            ans++;
        else if (s[1] == '-')
            ans -= 1;
    }
    cout << ans << "\n";
    return 0;
}