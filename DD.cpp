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
        int n, q;
        cin >> n >> q;
        int a[n];
        ll temp[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            temp[i] = sum;
        }
        int l, r, k, ol;
        for (int i = 1; i <= q; i++)
        {
            cin >> l >> r >> k;

            ll ts;
            if (l == 1)
            {
                ts = sum - (temp[r - 1]) + ((l - r + 1) * k);
            }
            else
                ts = sum - (temp[r - 1] - temp[l - 2]) + ((l - r + 1) * k);

            if (ts % 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
}