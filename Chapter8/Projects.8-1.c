#include <stdio.h>
#include<stdbool.h>

int main(void) {
	bool digit_seen[10] = { false };
	bool repeated[10] = { false };
	int digit;
	long n;
	printf("Enter a number : ");
	scanf_s("%ld", &n);
	
	
	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			repeated[digit] = true;
		}
		digit_seen[digit] = true;
		n /= 10;
	}
	printf("Repeated digits: ");
	bool hasrep = false;
	for (int i = 0; i < 10; i++) {
		if (repeated[i]) {
			printf("%d ", i);
			hasrep = true;
		}
		
	}
	if (hasrep == false) {
		printf("None");
	}
	
}