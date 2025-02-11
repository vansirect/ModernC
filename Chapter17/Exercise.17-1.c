#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void* my_malloc(size_t n) {
	void* res = malloc(n);
	if (res == NULL) {
		printf("Mem allocation failed");
		exit(EXIT_FAILURE);
	}
	return res;
}
int main() {
	char* str = (char*)my_malloc(20 * sizeof(char));
	char s[] = "Hello world";

	strcpy_s(str,20, s);

	printf("%s\n",str);

	free(str);

}
