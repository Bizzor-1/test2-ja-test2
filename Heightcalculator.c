#include <stdio.h>

int main () {
    float x, y, avg, diffplus, diffminus;

    printf("Enter your height: ");
    scanf("%f %f", &x, &y);
    avg =(x + y) / 2;
    diffplus = avg + 13;
    diffminus = avg - 13;
    printf("Your height is: %.2f %.2f ", diffminus, diffplus);

    return 0;
}