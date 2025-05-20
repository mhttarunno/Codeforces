/*
    In the name of Allah, the Most Compassionate and the Most Benevolent.
*/
// Problem: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
// Handle: Mahfujul Tarunno
#include <bits/stdc++.h>
using namespace std;
#define BoostIO()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define fli(a, b) for (int i = a; i < b; ++i)
#define swap(a, b) (a ^= b, b ^= a, a ^= b)
#define tc     \
    int tc;    \
    cin >> tc; \
    while (tc--)
#define endl '\n'
#define int long long
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define el cout << endl
#define txtIO()                       \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
/*-------------------------End of Macros-------------------------*/
void conquer()
{
    int a, b;
    cin >> a >> b;
    vector<int> v(a);
    fli(0, a) cin >> v[i];

    sort(all(v)); // O(n)

    fli(0, b)
    {
        int x;
        cin >> x;
        // Binary Search Emplementation :
        int left = 0, right = a - 1;
        bool ok = false;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (v[mid] == x)
            {
                ok = true;
                break;
            }
            else if (v[mid] < x) left = mid + 1;
            else right = mid - 1;
        }
        if (ok) cout << "found" << endl;
        else cout << "not found" << endl;
    }
}
signed main()
{
    BoostIO();
    conquer();
}
