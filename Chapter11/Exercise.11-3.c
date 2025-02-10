#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<time.h>
#include<cstdbool>
void avg_sum(double a[], int n, double* avg, double* sum) {
    int i;
    *sum = 0.0;  
    for (i = 0; i < n; i++) {
        *sum += a[i];  
    }
    *avg = *sum / n;  
}
