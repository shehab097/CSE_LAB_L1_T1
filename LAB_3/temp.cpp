#include<stdio.h>

int main()
{

    int s = 2, e = 100, c = 0;

    for (int i = s;i <= e;i++)
    {
        for (int j = 2;j < i;j++)
        {
            if (i % j == 0)
            {
                c++;
                break;
            }
        }

        if (c == 0 )
            printf("%d ", i);
        c = 0;

    }
    return 0;
}