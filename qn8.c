// 8. Write a program in C to count the frequency of each element of an array.
#include <stdio.h>

int main()
{
    int arr[30], freq[30];
    int temp, count = 0;
    int i, j, c;

    printf("Enter elements (-1 to stop):\n");

    for (i = 0; i < 30; i++)
    {
        scanf("%d", &temp);
        if (temp == -1)
            break;

        arr[i] = temp;
        freq[i] = -1;   // mark as not counted
        count++;
    }

    for (i = 0; i < count; i++)
    {
        if (freq[i] != 0)
        {
            c = 1;
            for (j = i + 1; j < count; j++)
            {
                if (arr[i] == arr[j])
                {
                    c++;
                    freq[j] = 0;   // already counted
                }
            }
            freq[i] = c;
        }
    }

    printf("\nElement   Frequency\n");
    for (i = 0; i < count; i++)
    {
        if (freq[i] != 0)
        {
            printf("%d\t\t%d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
