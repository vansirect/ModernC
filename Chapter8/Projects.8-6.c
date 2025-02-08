#include <stdio.h>
#include<stdbool.h>
#include <string.h>
#include <ctype.h>
void toUpperCase(char str[]) {
	for (int i = 0; str[i] != '\0'; i++) {  
		str[i] = toupper(str[i]);  
	}
}
void printstr(char str[]) {
	
	for (int i = 0; str[i] != '\0'; i++) {
		printf("%c", str[i]);
	}


}
int main(void) {
	char original[40];
	
	printf("Enter message: ");

	fgets(original, sizeof(original), stdin);

	original[strcspn(original, "\n")] = '\0';
	toUpperCase(original);
	// (A ^ 4 . B ^ 8 . E -> 3,1-> 1,0 ^ 0 . S~>5
	for (int j = 0; original[j] != '\0'; j++) {
		switch (original[j])
		{
		case 'A':
			original[j] = '4';
			break;
		case 'B':
			original[j] = '8';
			break;
		case 'E':
			original[j] = '3';
			break;
		case 'I':
			original[j] = '4';
			break;
		case 'O':
			original[j] = '0';
			break;
		case 'S':
			original[j] = '5';
			break;
		default:
			break;
		}
	}
	printf("In BlFF-speak: ");
	char exc[11] = "!!!!!!!!!!";
	strncat_s(original, sizeof(original), exc, sizeof(exc) - 1);
	printstr(original);
	
	
}