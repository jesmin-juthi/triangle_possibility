#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Please enter the triangle values: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a < 0 || b < 0 || c < 0)
        printf("Please enter a non-negative number! ");

    else if(a + b > c && a + c > b && b + c > a)
        printf("YES");
    else
        printf("NO");

    return 0;
}
