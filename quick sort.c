#include<stdio.h>

int main(){
    int n,arr[n],i;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        
}
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int p,int q){
    int i,pivot,j;
    pivot=arr[q];
    i=(p-1);
    for (j=p;j<q;j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }

swap(&arr[i + 1], &arr[q]);
    return (i + 1);
}
void quicksort(int arr[],int p,int q){
    int pi;

    if(p<q){
        pi=partition(arr,p,q);
        quicksort(arr,p,pi-1);
        quicksort(arr,pi+1,q);
    }
}
void printarray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
    }
    printf("/n");
}
    
