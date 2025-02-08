#include <stdio.h>
#include<stdbool.h>

int main(void) {
	bool digit_seen[10] = { false };
	
	int countrep[10] = { 0 };
	int digit;
	
	long n;
	printf("Enter a number : ");
	scanf_s("%ld", &n);
	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			
			countrep[digit]++;
			
		}
		digit_seen[digit] = true;
		n /= 10;
	}

	printf("Digit: ");
	for (int j = 0; j < 10;j++) {
		printf("%d ",j);
	}
	printf("\n");
	printf("Occurences: ");
	
	for (int i = 0; i < 10; i++) {
			printf("%d ", countrep[i]);
		
	}
	
	
}