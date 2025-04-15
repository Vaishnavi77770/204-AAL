#include<stdio.h>
void insertionsort(int arr[], int n) {
    int sorted[n];
    int unsorted[n];
    int sortedSize = 0, unsortedSize = n;
    int i;
    for (i = 0; i < n; i++) {
        unsorted[i] = arr[i];
    }
    printf("Initial Unsorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", unsorted[i]);
    }

    while (unsortedSize > 0) {
        int minIndex = 0;
        for (i = 1; i < unsortedSize; i++) {
            if (unsorted[i] < unsorted[minIndex]) {
                minIndex = i;
            }
        }
        sorted[sortedSize] = unsorted[minIndex];
        sortedSize++;

        for (i = minIndex; i < unsortedSize - 1; i++) {
            unsorted[i] = unsorted[i + 1];
        }
        unsortedSize--;

        printf("\nSorted Array: ");
        for (i = 0; i < sortedSize; i++) {
            printf("%d ", sorted[i]);
        }
        printf("\n");

        printf("Unsorted Array: ");
        for (i = 0; i < unsortedSize; i++) {
            printf("%d ", unsorted[i]);
        }
        printf("\n");
    }
    printf("\nFinal Sorted Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", sorted[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionsort(arr, n);
    return 0;
}


