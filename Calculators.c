#include <stdio.h>
int main()
{
    char operator;
    double num1, num2, result;

    printf(" Enter an operator (+,-,*,/,%%) : ");
    scanf("%c", &operator);

    printf("Enter two numbers : ");
    scanf("%lf %lf", &num1, &num2);

    int intNumber1 = (int)num1; // conversion double into int for modulo operation because modulo doesn't perform with real numbers (float or double)
    int intNumber2 = (int)num2;

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;

        else
        {
            printf("Division by Zero is not allowed.");
            return 1;
        }
        break;

    case '%':

        if (num2 != 0) // Check for zero before performing modulo
            result = intNumber1 % intNumber2 ;
        else
        {
            printf("Division by Zero in modulo is not allowed.");
            return 1;
        }
        break;

    default:
        printf("Error ! Invalid Operator");
        return 1;
    }

    printf("Result: %lf\n", result);

    return 0;
}
