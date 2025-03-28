#include<stdio.h>
#include<string.h>




char* months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"};

int main() {
    int m, d, y;
    char date[20];
    char month[20];
    printf("Enter a date (mm/dd/yyyy): ");

    scanf("%s", &date);

    sscanf(date, "%d/%d/%d", &m, &d, &y);
     
    strcpy(month, months[m - 1]);

    printf("You entered the date %s %d %d", month, d, y);



    
}
