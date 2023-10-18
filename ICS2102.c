#include <stdio.h>


int main(void)
{
    int b;
    printf("enter a value: ");
    scanf("%d", &b);
    if (b < 0)
    printf("the value is negative\n");
    else if (b == 0)

    printf("the value is zero\n");
    else

        printf("the value is positive\n");

    return 0;
}
