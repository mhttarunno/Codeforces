#include <bits/stdc++.h>
using namespace std;

int main()
{
    string string_1, string_2;
    cin >> string_1 >> string_2;

    for (int i = 0; i < string_1.size(); i++)
    {
        char letter_1 = toupper(string_1[i]);
        char letter_2 = toupper(string_2[i]);

        if (letter_1 < letter_2)
        {
            cout << -1 << endl;
            return 0;
        }
        else if (letter_1 > letter_2)
        {
            cout << 1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;
    return 0;
}
