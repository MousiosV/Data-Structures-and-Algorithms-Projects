#include <stdio.h>

int main()
{
    float a, b, result;
    char operation;
    int count = 0; 

    while (1) {
        printf("Enter a, b and operation (+, -, *, / or $ to exit): ");
        scanf("%f %f %c", &a, &b, &operation);

        
        if (operation == '$') {
            printf("Calculated %d operations!\n", count);
            break;
        }

        // Check whether operation is invalid (e.g., division by 0.0)
        if (operation == '/' && b == 0.0) {
            printf("Error: Cannot divide by 0.0. Operation has failed.\n");
            return 1; 
        }

        if (operation == '+')
            result = a + b;
        else if (operation == '-')
            result = a - b;
        else if (operation == '*')
            result = a * b;
         else {
        // Operation should be /, otherwise it's an undefined operation.
        if (operation != '/') {
            printf("Error: undefined operation: %c", operation);
            return 1;
        }
        result = a / b;
    }

        
        count++;
        printf("Success! Result of %.2f %c %.2f = %.2f\n", a, operation, b, result);
    }

    return 0;
}
