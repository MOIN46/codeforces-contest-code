#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }

        int count = 0, flag = 0;

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == 'R')
                {
                    count++;
                }
            }
            if (count == 8)
            {
                cout << "R" << endl;
                flag = 1;
                break;
            }
            count = 0;
        }
        if (flag == 0)
        {
            cout << "B" << endl;
        }
    }
    return 0;
}