
#include <stdio.h>



int main() {
    char operator;
    double num1, num2, result;

    // Displaying the options to the user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Asking for input numbers
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Switch case to perform the corresponding operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            // printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            // printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            // printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            break;
    }
return 0;
}
