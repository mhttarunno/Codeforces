/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/474/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer() {
    char ch;
    cin >> ch;
    string s;
    cin >> s;
    string ss = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i = 0; i < s.size(); ++i) {
        for(int j = 0; j < ss.size(); ++j) {
            if(s[i] == ss[j]) {
                if(ch == 'R') {
                    s[i] = ss[j - 1];
                }
                else {
                    s[i] = ss[j + 1];
                }
                break;
            }
        }
    }
    cout << s << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(nullptr);
    conquer();
}