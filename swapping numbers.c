#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter two numbers: ");
    scanf("%d",&a);
    printf("enter the number:");
    scanf("%d",&b);

    // Swapping numbers
    c = a;
    a = b;
    b = c;

    printf("Swapped numbers:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

