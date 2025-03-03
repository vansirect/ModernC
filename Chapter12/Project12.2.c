#include<stdlib.h>



int main() {
	int character;
	
	int arr[40];
	int i = 0;
	printf("Enter a message: ");
	while ((character = getchar()) != '\n' && i < 40) {
		if (character >= 'A' && character <= 'Z' || character >= 'a' && character <= 'z'  ) {

			arr[i] = character;
			i++;
		}
		
	};
	int size = i - 1;
	int j = 0;
	while (j < i) {
		if (arr[j] != arr[size]) {
			printf("Not palindrome\n");
			return 0;
		}
		j++;
		size--;
	}
	printf("Palindrome\n");

	
	
	
	
}	