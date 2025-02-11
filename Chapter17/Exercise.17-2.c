#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* duplicate(char * str) {

	char* res = malloc(strlen(str) + 1);
	if (!res) {
		return NULL;
	}
	strcpy_s(res, strlen(str) + 1, str);
	return res;


}
int main() {
	char s[] = "Hello world";
	char* p;
	p = duplicate(s);
	printf("Copied word: %s\n", p);
	free(p);

	

}