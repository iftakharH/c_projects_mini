#include <stdio.h>


void print_table (int range, int num)
{
    int mul;

    for (int i = 1; i <= range; i++)
    {
        mul = i * num;

        printf("%d * %d = %d\n", i, num, mul);

        printf ("\n");
    }
}

int main()
{
    int range;
    printf("Enter The Range: \n");
    scanf("%d", &range);

    int num;
    printf("Enter The Number: \n");
    scanf("%d", &num);

    print_table ( range, num );
}