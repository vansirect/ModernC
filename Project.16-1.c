#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <string.h>


struct setup {
	char *country;
	int code;
};
const struct setup dialing_code_country_codes[] =
{
{"Argentina", 54}, { "Bangladesh", 880 },
{ "Brazil", 55 }, { "Burma (Myanmar)", 95 },
{ "China", 86 }, { "Colombia", 57 },
{ "Congo, Dem. Rep. of", 243 }, { "Egypt", 20 },
{ "Ethiopia", 251 }, { "France", 33 },
{ "Germany", 49 }, { "India", 91 },
{ "Indonesia", 62 }, { "Iran", 98 },
{ "Italy", 39 }, { "Japan", 81 },
{ "Mexico", 52 }, { "Nigeria", 234 },
{ "Pakistan", 92 }, { "Philippines", 63 },
{ "Poland", 48 },{ "Russia", 7 },
{ "South Africa", 27 }, { "South Korea", 82 },
{ "Spain", 34 }, { "Sudan", 249 },
{ "Thailand", 66 }, { "Turkey", 90 },
{ "Ukraine", 380 }, { "United Kingdom", 44 },
{ "United States", 1 }, { "Vietnam", 84 }
};
int main(void){
	int size = sizeof(dialing_code_country_codes)/sizeof(dialing_code_country_codes[0]);
	char name[40];
	printf("Enter a country name: ");
	scanf("%s", &name);
	for (int i = 0; i < size;i++) {
		if (strcmp(dialing_code_country_codes[i].country,name) ==0) {
			printf("Your country code is: %d", (int)dialing_code_country_codes[i].code);
		}
		
	}
	printf("Invalid country");
}
