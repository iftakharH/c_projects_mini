#include<stdio.h>

void swap(int *x1, int *y1)
{
    int temp = *x1;
    *x1 = *y1;
    *y1 = temp;
}

int main()
{
    int x, y;
    printf("Enter the value of x: \n");
    scanf("%d", &x);

    printf("10Enter the value of y: \n");
    scanf("%d", &y);

    swap(&x, &y);  

    printf("After Swapping: x=%d, y=%d", x, y);
    return 0;
}