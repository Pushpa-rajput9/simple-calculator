#include <stdio.h>
#include <conio.h>
void main()
{
    float num1, num2;
    char op;
    printf("Enter first number :\t");
    scanf("%f", &num1);

    printf("Enter operator:\t");
    scanf(" %c", &op);

    printf("Enter second number:\t");
    scanf("%f", &num2);
    switch (op)
    {
    case '+':
        printf("sum=%.2f\n", num1 + num2);
        break;
    case '-':
        printf("sub=%.2f\n", num1 - num2);
        break;
    case '*':
        printf("mul=%.2f\n", num1 * num2);
        break;
    case '/':
        printf("divide=%.2f\n", num1 / num2);
        break;
    }
    getch();
}