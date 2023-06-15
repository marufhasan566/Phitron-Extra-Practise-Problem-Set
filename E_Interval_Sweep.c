#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == 0 && b == 0)
    {
        printf("NO\n");
    }
    else
    {
        int cmp = abs(a - b);
        // printf("%d\n", cmp);
        if (cmp == 1 || cmp == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        return 0;
    }
}
