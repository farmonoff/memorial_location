#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void output(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");
}

void qosh(int arr[], int n)
{
    if (n != 1)
    {
        arr = realloc(arr, n * sizeof(int));
    }
    arr[n - 1] = 10 + rand() % 90;
    // output(arr,n);
}

void kamay(int arr[], int n)
{
    arr = realloc(arr, n * sizeof(int));
    // output(arr,n);
}

int main()
{

    srand(time(0));
    int ch = 0, n = 0;
    // int *array;
    // array = realloc(array,1*sizeof(int));
    int *arr = malloc((n + 1) * sizeof(int));

    if (arr == NULL)
    {
        printf("K\n");
        return 1;
    }

    while (ch != 4)
    {
        printf("1. Son qo'shish\n");
        printf("2. Son kamaytirish\n");
        printf("3. Sonlarni chiqarish\n");
        printf("4. Chiqish\n");
        printf("%d\n", n);
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            qosh(arr, ++n);
            break;
        case 2:
            kamay(arr, --n);
            break;
        case 3:
            output(arr, n);
            break;
        case 4:
            break;
        default:
            printf("Iltimos 1 - 4 gachan tanlang!\n");
        }
    }
    // free(arr);

    return 0;
}