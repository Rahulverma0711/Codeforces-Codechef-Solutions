//जय हिन्द
//Jai Hind
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll price, change;
    cin >> price >> change;
    int count = 0;
    ll total = 0;
    bool flag = 1;
    while (flag)
    {
        if ((total % 10 == 0 && total != 0) || total%10==change)
        break;

        count++;
        total += price;
    }
    cout<<count<<"\n";
    return 0;
}