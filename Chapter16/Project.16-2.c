#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NAME_LEN 25
#define MAX_PARTS 100
struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
} inventory[MAX_PARTS];

int num_parts = 0;
int find_part(int number) {
	int i;
	for (i = 0; i < num_parts; i++) {
		if (inventory[i].number == number) {
			return i;
		}
	}
	return -1;
}
void insert(void) {
	int part_number;
	if (num_parts == MAX_PARTS) {
		printf("Database is full; can't add more parts.\n");
		return;
	}
	printf("Enter part number: ");
	scanf("%d", &part_number);
	if (find_part(part_number) >= 0) {
		printf("Part already exists.\n");
		return;
	}
	inventory[num_parts].number = part_number;
	printf("Enter part name: ");
	scanf("%s", inventory[num_parts].name);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[num_parts].on_hand);
	num_parts++;
}
void update(void){
	int i, number;
	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if (i >= 0) {
		printf("Enter change in quantity on hand: ");
		scanf("%d", &inventory[i].on_hand);
	}
	else {
		printf("Part not found.\n");
	}
}
void print(void) {
	int i;
	printf("Part Number Part Name Quantity on Hand\n");
	for (i = 0; i < num_parts; i++) {
		printf("%7d     %-25s%11d\n", inventory[i].number, inventory[i].name, inventory[i].on_hand);
	}
}

void delete(void) {
	int i, number;
	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if (i >= 0) {
		inventory[i] = inventory[num_parts - 1];
		num_parts--;
	}
	else {
		printf("Part not found.\n");
	}
}
void search(void) {
	int i, number;
	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);
	if (i >= 0) {
	printf("Part name: %s\n", inventory[i].name);
	printf("Quantity on hand: %d\n", inventory[i].on_hand);
	}
	else {
		printf("Part not found.\n");
		}
	}

int main(void) {
	char code;
	for (;;) {
		printf("Enter operation code: ");
		scanf("%c",&code);
		while (getchar() != '\n');

		switch (code) {
		case 'i':
			insert();
			break;
		case'u':
			update();
			break;
		case'p':
			print();
			break;
		case'd':
			delete();
			break;
		case'c':
			search();
			break;
		case 'q':
			return 0;
		default:
			printf("Illegal code \n");
		};
		printf("\n");

	}

	return 0;
   
}
