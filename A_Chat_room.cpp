#include <iostream>
#include <cmath>
#include <algorithm>
#include <limits>
#include <vector>
#include <bitset>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <time.h>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <cctype>
#include <list>
#include <iterator>
#include <string.h>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string word, hello = "hello";
    cin >> word;
    int j = 0, pas = 0;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == hello[j])
        {
            j++;
            pas++;
        }
    }
    if (pas == 5)
        cout << "YES"
             << "\n";
    else
        cout << "NO"
             << "\n";

    return 0;
}