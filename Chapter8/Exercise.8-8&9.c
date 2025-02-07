#include <stdio.h>
#include<stdbool.h>

int main() {
	int sum = 0;
	int num = 30 * 24;
	int temperature_readings[30][24];
	for (int i = 0; i < 30;i++) {
		for (int j = 0; j < 24; j++) {
			sum += temperature_readings[i][j];

		}

	}
	int average = sum / num;
	printf("%d", average);
}
   