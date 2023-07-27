/**
 *    author:  MOIN46
 **/

#include <bits/stdc++.h>

#define endl "\n"
#define EPS 1E-9
#define PI acos(-1)
#define ll long long int

using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x = 0, y = 0;
        int flag = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'U')
                y = y + 1;
            else if (s[i] == 'D')
                y = y - 1;
            else if (s[i] == 'R')
                x = x + 1;
            else if (s[i] == 'L')
                x = x - 1;

            if (x == 1 && y == 1)
            {
                cout << "YES\n";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << "NO\n";
    }
    return 0;
}
