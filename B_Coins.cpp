//जय हिन्द
//Jai Hind
//status:accepted
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
void solve()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if (s1[1] == '<')
        swap(s1[0], s1[2]);
    if (s2[1] == '<')
        swap(s2[0], s2[2]);
    if (s3[1] == '<')
        swap(s3[0], s3[2]);
    vi f(3, 0);
    vi f1(3, 0);
    f[s1[0] - 'A']++;
    f[s2[0] - 'A']++;
    f[s3[0] - 'A']++;

    f1[s1[2] - 'A']++;
    f1[s2[2] - 'A']++;
    f1[s3[2] - 'A']++;
    if(f[0]==1 && f[1]==1 && f[2]==1)
    {
        cout<<"Impossible";
        return;
    }
    vector<char> ans(3);
    for (int i = 0; i < 3; i++)
    {
        if (f[i] == 2)
        {
            ans[0] = i + 'A';
        }
        if (f[i] == 1)
        {
            ans[1] = i + 'A';
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (f1[i] == 2)
        {
            ans[2] = i + 'A';
        }
    }

    for (int i = 2; i >= 0; i--)
        cout << ans[i];
}
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    //int _t; cin>>_t;while(_t--)
    solve();
    return 0;
}