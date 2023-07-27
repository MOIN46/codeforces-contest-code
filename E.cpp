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
        ll n;
        cin >> n;
        ll a[n];
        long long int sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (ll i = 0; i < n - 2; i++)
        {
            if (a[i] <= 0 && a[i + 1] <= 0 && a[i + 2] <= 0)
            {
                if (((a[i] + a[i + 1]) * (-1)) >= ((a[i + 1] + a[i + 2]) * (-1)))
                    sum += (a[i] * (-2)) + (a[i + 1] * (-2));
                else
                {
                    sum += (a[i + 1] * (-2)) + (a[i + 2] * (-2));
                    i++;
                }
                i++;
            }
            else if (((a[i] + a[i + 1]) * (-1)) >= 0 && a[i] <= 0 || a[i + 1] <= 0)
            {
                sum += (a[i] * (-2)) + (a[i + 1] * (-2));
                i++;
            }
            else if (a[i] <= 0 && a[i + 1] <= 0)
            {
                sum += (a[i] * (-2)) + (a[i + 1] * (-2));
            }
        }

        cout << max(sum, (-1) * sum) << "\n";
    }
    return 0;
}
