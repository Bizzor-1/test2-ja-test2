#include <stdio.h>

int main () {
     int x, y, z;
     printf("Enter your 3 integer: ");
     scanf("%d %d %d", &x, &y, &z);

     if (x + y <= z)
     {
        printf("This is NOT a triangle.");
     } else if (x + z <= y) 
     {
        printf("This is NOT a triangle.");
     } else if (y + z <= x)
     {
        printf("This is NOT a triangle.");
     } else if (x == y)
     {
        printf("This is an isosceles triangle.");
      } else if (x == z)
     {
        printf("This is an isosceles triangle.");
     } else if (y == z)
     {
        printf("This is an isosceles triangle.");       
     } else if (x == y == z) 
     {
        printf("This is an equilateral triangle.");
     } else {
        printf("This is a scalene triangle.");
     }
     

    return 0;
}