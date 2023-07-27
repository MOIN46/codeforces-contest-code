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
        string s;
        s = "codeforces";
        string s1;
        cin >> s1;
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == s1[0])
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
