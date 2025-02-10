#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int poly(int x) {
    /*3.v
5
 4- 2.f’ - 5.v
3
- x
2
 4- 7x - 6
    
    
    */
    int one = 3 * round(pow(x, 5));
    int two = 2 * round(pow(x, 4));
    int three = 4 * round(pow(x, 3));
    int four = round(pow(x, 2));
    int five = 7 * x;

    int result = one + two - three - four + five - 6;
    return result;

}


int main() {
    int x;
    printf("Enter a number: ");
    scanf_s("%d", &x);
    int final = poly(x);
    printf("Here it is after:  %d", final);

    return 0;
}