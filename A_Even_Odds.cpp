/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/contest/318/problem/A
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
#define yes cout << "YES\n"
#define no cout << "NO\n"

void conquer() {
    int a, b;
    cin >> a >> b;
    int x = (a + 1) / 2;
    if (b <= x) 
        cout << 2 * b - 1 << endl;
    else 
        cout << 2 * (b - x) << endl;
}

int32_t Z() {

    Implemented By Tarunno

    conquer();
}