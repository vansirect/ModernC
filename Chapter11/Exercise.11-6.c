#include <stdio.h>
#include <stdlib.h>



void selection_sort(int arr[], int n) {
	for (int i = 0; i < n-1; i++) {
		int min = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min]) {
				min = j;
			}
		}
		int temp = arr[min];
		arr[min] = arr[i];
		arr[i] = temp;

	}


}


void find_two_largest(int arr[], int n, int* largest, int* second_largest) {
	selection_sort(arr, n);
	*largest = arr[n-1];
	*second_largest = arr[n - 2];
}
int main() {
	int check[] = { 1,8,9,4,3,45,6 };
	int n = (int) sizeof(check) / sizeof(check[0]);
	int largest, second_largest;
	find_two_largest(check, n, &largest, &second_largest);

	printf("Largest is %d and second largest is %d", largest, second_largest);

}