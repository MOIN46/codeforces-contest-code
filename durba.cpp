#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {

        char CH[2];
        scanf("%s", CH);
        char s[] = "codeforces";
        int c = 0;

        for (int i = 0; i < 10; i++)
        {
            if (s[i] == CH[0])
            {
                c = 1;
                break;
            }
        }
        if (c == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}