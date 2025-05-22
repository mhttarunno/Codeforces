/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"

void conquer(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int count = 0;
    sort(v.begin(), v.end());
    for(int i = 0; i < n; ++i) {
        if (binary_search(v.begin(), v.end(), v[i] + 1))
            count++;
    }
    cout << count << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    conquer();
}