#include <stdio.h>
#include <limits.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    // Print
    long long int min = INT_MAX;
    int loop = n % k;
    // printf("%d\n", loop);
    for (int i = 0; i <= loop; i++)
    {
        // printf("%d\t", arr[i]);
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("%lld\n", min);

    return 0;
}