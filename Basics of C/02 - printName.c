#include <stdio.h>

int  main()
{
    //  1. print using printf();

    printf("My Name is: Iftakhar. \n");


    //  2. print using scanf();

    char name[20];
    printf("Enter Name: ");

    //scanf will take input from user
    scanf("%s", name);
    printf("Your Name is: %s", name);


    //  3. using fgets();
    /*fgets() will take input from user and store in a string.
    open 3rd code in another fresh file it will not run in the same file. Added here because of the same topic.*/

    char x[20];
    printf("Enter Name: ");
    fgets(x, 20, stdin);
    printf("Your Name is: %s", x);



    return 0;
}
