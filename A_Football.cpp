/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: 
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    int n;
    cin >> n;
    unordered_map<string, int> us;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s;
        us[s]++;
    }

    string ss;
    int count = 0;
    for (auto &i : us) {
        if (i.second > count) {
            count = i.second;
            ss = i.first;
        }
    }
    cout << ss << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}