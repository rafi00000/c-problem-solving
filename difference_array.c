#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n], arr_b[n], c[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        // array copy
        for (int i = 0; i < n; i++)
        {
            arr_b[i] = arr[i];
        }

        // array b in asc order
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr_b[i] > arr_b[j])
                {
                    int tmp = arr_b[i];
                    arr_b[i] = arr_b[j];
                    arr_b[j] = tmp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            c[i] = abs(arr[i] - arr_b[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }
    return 0;
}