#include <stdio.h>
void selectionsort(int arr[], int n) {
    int i, j, minindex, temp;
    for (i = 0; i < n - 1; i++) {
        minindex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        if (minindex != i) {
            temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
}
void printarray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {5, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: \n");
    printarray(arr, n);
    
    selectionsort(arr, n);
    
    printf("Sorted array: \n");
    printarray(arr, n);
    
    return 0;
}

