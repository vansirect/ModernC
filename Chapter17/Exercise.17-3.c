#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* create_array(int n, int initial_val) {
	int *arr  = (int *)malloc(n * sizeof(int));
	if (arr == NULL) {
		return NULL;
	}
	for (int i = 0;i < n;i++) {
		arr[i] = initial_val;

	}
	return arr;

}

int main() {

	int *array = create_array(5, 5);
	for (int i = 0; i < 5;i++) {
		printf("%d ",array[i]);
	}

	free(array);
}