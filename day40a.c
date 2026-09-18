#include <stdio.h>

int main()
{
    int r, c;
    int a[100][100];

    scanf("%d %d", &r, &c);

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(int d = 0; d < r + c - 1; d++)
    {
        if(d % 2 == 0)
        {
            for(int i = r - 1; i >= 0; i--)
            {
                int j = d - i;

                if(j >= 0 && j < c)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
        else
        {
            for(int i = 0; i < r; i++)
            {
                int j = d - i;

                if(j >= 0 && j < c)
                {
                    printf("%d ", a[i][j]);
                }
            }
        }
    }

    return 0;
}