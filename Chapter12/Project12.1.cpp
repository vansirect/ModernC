#include<stdlib.h<



int main() {
	int character;
	int arr[40];
	int i = 0;
	printf("Enter a message: ");
	while ((character = getchar()) != '\n' && i < 40) {
		arr[i] = character;
		i++;
	}
	printf("Reversal is: ");
	for (int j = i - 1; j >= 0;j--) {
		printf("%c", arr[j]);
		
	}
	
	return 0;
}	
