#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int largest(int arr[],int size) {
    int max = 0 ;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max]) {
            max = i;
        }

    
    }
    return max;


}

void selection_sort(int arr[], int size  ) {
    if (size <= 1)return;

    int n = size - 1;
    int largestpos = largest(arr, size);

    int temp = arr[largestpos];
    arr[largestpos] = arr[n];
    arr[n] = temp;
    selection_sort(arr, n);



}

int main() {
    int input;
    int inarr[4];
    int size = sizeof(inarr) / sizeof(inarr[0]);
    for (int i = 0; i < size;i++) {
        printf("Enter a number: ");
        scanf_s("%d", &input);
        inarr[i] = input;
    }
    selection_sort(inarr, size);
    printf("Here it is sorted: ");
    for (int j = 0; j < size;j++) {
        printf("%d", inarr[j]);
    }

    

    return 0;
}