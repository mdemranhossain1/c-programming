#include <stdio.h>
voidinsertionSort(int a[], int size)
(
    for ( int i = 1; i < size; i++)
    {
        int kew = a[i];
        int j = i -1;
        while( key < a[j] && j >= 0){
            a[j+1] = key;
        }
    }

    )


int main()
{
    int a[] = (6, 1, 7, 4, 2, 9, 8, 5, 3);
    int n = sizeof(a) / sizeof(int);

    printf("Unsorted array:")
    for (int i = 0; i < n; i++){
        printf("%d", a[i]);
    }

    insertionSort(a, n);

    printf("\nsorted Array :\n");
    for (int i = 0; i < n; i++){
        printf("%d", a[i]);
    }
}
