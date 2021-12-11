#include <bits/stdc++.h>

using namespace std;

int freq[3000];


int main() {
	int maxFreq = 0, n;
	char ch;
	string s;
	getline(cin,s);
	n = s.length();
	for (int i = 0; i < n; ++i) {
		freq[s[i]]++;
		if (freq[s[i]] > maxFreq) {
			maxFreq = freq[s[i]];
			ch = s[i];
		} else if (freq[s[i]] == maxFreq && ch > s[i]) {
			ch = s[i];
		}
	}
	cout << ch << " " << maxFreq;
	return 0;
}