/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/451/problem/A
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define Implemented ios_base::sync_with_stdio(false);
#define By cin.tie(0);
#define Tarunno cout.tie(NULL);
#define Z main
#define all(a) a.begin(), a.end()
#define allc(a, x) a.begin(), a.end(), x
#define fll(x, a, b) for (int x = a; x < b; ++x)
#define fl(a) for (auto &i : a)
#define endl '\n'
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl

void conquer() {
    int n, k;
    cin >> n >> k;
    int i = 1, count = 0;
    while(1) {
        if(n - i == 0) break;
        if(k - i == 0) break;
        i++;
        count++;
    }
    if(!(count & 1)) cout << "Akshat" << endl;
    else cout << "Malvika" << endl;
}

int32_t Z() {

    Implemented By Tarunno

    conquer();
}