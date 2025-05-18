/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/490/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer(){
    int n;
    cin >> n;
    vector<int> a, b, c;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if(x == 1) a.push_back(i);
        else if(x == 2) b.push_back(i);
        else if(x == 3) c.push_back(i);
    }
    int ans = min({a.size(), b.size(), c.size()});
    cout << ans << endl;
    for(int i = 0; i < ans; i++) {
        cout << a[i] << " " << b[i] << " " << c[i] << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1, Case = 1;
    cin >> t;
    while(t--)
    conquer();
}