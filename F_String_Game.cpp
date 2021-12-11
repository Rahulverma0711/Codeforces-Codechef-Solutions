//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))

const int MAX = 256;
bool isSubSequence(string str1, string str2, int m, int n)
{
    int j = 0;
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j == m);
}

bool canMakeStr2(string str1, string str2, int a[], int m)
{
    for (int i = 0; i < m; i++)
    {
        str1[a[i] - 1] = 0;
    }
    string temp;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] != 0)
            temp.push_back(str1[i]);
    }
    bool ans = isSubSequence(str2, temp, str2.length(), temp.length());
    return ans;
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.length();
    int a[n];
    rep(i, 0, n)
            cin >>
        a[i];
    int h = n, l = 0;
    while (h - l > 1)
    {
        int m = (h + l) / 2;
        if (canMakeStr2(s1, s2, a, m))
            l = m;
        else
            h = m;
    }
    cout << l << "\n";
    return 0;
}