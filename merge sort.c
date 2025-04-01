#include<stdio.h>

void merge(int arr[], int l, int r, int mid) {
    int i, j, k,n1 ,n2;
    n1 = mid - l + 1; 
    n2 = r - mid;    
    int left[n1], right[n2];
    for (i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];
    i = 0,j = 0,k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int mid = l + (r - l) / 2; 
        mergeSort(arr, l, mid);      
        mergeSort(arr, mid + 1, r);  
        merge(arr, l, r, mid);      
    }
}
void printArray(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int n,i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the array elements: ");
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Given array: \n");
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

