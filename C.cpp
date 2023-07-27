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
        int c = 0;
        int j = n - 1;
        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[j])
            {
                c++;
            }
            else
            {
                break;
            }
            j--;
        }
        cout << n - (c * 2) << "\n";
    }
    return 0;
}
