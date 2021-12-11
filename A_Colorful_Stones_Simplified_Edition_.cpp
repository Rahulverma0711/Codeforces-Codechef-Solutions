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
    string s1, s2;
    cin >> s1 >> s2;
    int i = 0;
    int n = s2.length();
    for (int j = 0; j < n; j++)
    {
        if (s2[j] == s1[i])
            i++;
    }
    cout << i + 1 << "\n";
    return 0;
}