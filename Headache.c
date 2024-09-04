#include <stdio.h>

int main () {
    int num1, num2, i;
    
    printf("Enter 2 number: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("Your first number must less than second number.");
    } else {
        printf("All the numbers that can be divided by 13 are:\n");
        //เริ่มนับตัวเลขตั้งแต่ num1 -> num2
        for (i = num1; i <= num2; i++)
        {
            //เลขที่นับมาต้องผ่านขั้นตอนนี้ที่เลขต้องหารด้วย 13 ลงตัว
            while (i % 13 == 0)
            {
                printf("%d\n", i);
                i++;
            }    
        }  
    }
    printf("Bye!!");

    return 0;
}