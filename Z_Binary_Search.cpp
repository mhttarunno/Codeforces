/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

int32_t main() {
    ios_base::sync_with_stdio(0),
    cin.tie(0), 
    cout.tie(0);
    
    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    for(int i = 0 ; i < a ; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    while(b--) {
        int x;
        cin >> x;
        int left = 0, right = a - 1;
        bool ok = false;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (v[mid] == x) {
                ok = true;
                break;
            } else if (v[mid] < x)
                left = mid + 1;
            else
                right = mid - 1;
        }
        if (ok)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
}
