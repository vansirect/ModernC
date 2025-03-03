#include<iostream>



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
	/*
	* 
	* for (int j = i - 1; j >= 0;j--) {
		printf("%c", arr[j]);
		
	}
	* 
	* 
	*/
	for (int* j = &arr[0]+ i-1;j >= &arr[0];j--) {
		printf("%c", *j);


	}
	
	return 0;
}	
