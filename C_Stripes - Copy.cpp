#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        char mat[8][8];

        for (int i = 0; i < 8; i++)
        {

            for (int j = 0; j < 8; j++)
            {
                cin >> mat[i][j];
            }
        }
        /*for(int i=0; i<8; i++){

            for(int j=0;j<8; j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }*/
        int count = 0;
        if (mat[0][0] == 'B')
        {
            count = 1;
            for (int j = 1; j < 8; j++)
            {
                if (mat[0][j] == 'B')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count == 8)
            {
                cout << "B" << endl;
            }
            for (int j = 1; j < 8; j++)
            {
                if (mat[j][0] == 'B')
                {
                    count++;
                }
                else
                {
                    count = 0;
                    break;
                }
            }
            if (count == 8)
            {
                cout << "B" << endl;
            }
        }
        else if (mat[0][0] == 'R')
        {
            count = 1;
            for (int j = 1; j < 8; j++)
            {
                if (mat[0][j] == 'R')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            for (int j = 1; j < 8; j++)
            {
                if (mat[j][0] == 'R')
                {
                    count++;
                }
                else
                {
                    count = 0;
                    break;
                }
            }
            if (count == 8)
            {
                cout << "R" << endl;
            }
        }

        else
        {
            for (int i = 1; i < 8; i++)
            {

                if (mat[0][i] == 'B')
                {
                    count = 1;
                    for (int j = 1; j < 8; j++)
                    {
                        if (mat[j][i] == 'B')
                        {
                            count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (count == 8)
                    {
                        cout << "B" << endl;
                    }
                }
                if (mat[0][i] == 'R')
                {
                    count = 1;
                    for (int j = 1; j < 8; j++)
                    {
                        if (mat[j][i] == 'R')
                        {
                            count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (count == 8)
                        cout << "R" << endl;
                }
                if (mat[i][0] == 'B')
                {
                    count = 1;
                    for (int j = 1; j < 8; j++)
                    {
                        if (mat[i][j] == 'B')
                        {
                            count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (count == 8)
                    {
                        cout << "B" << endl;
                    }
                }
                if (mat[i][0] == 'R')
                {
                    count = 1;
                    for (int j = 1; j < 8; j++)
                    {
                        if (mat[i][j] == 'R')
                        {
                            count++;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (count == 8)
                    {
                        cout << "R" << endl;
                    }
                }
            }
        }
    }

    return 0;
}
