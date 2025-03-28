// Your code here...
#include <stdio.h>

// Function prototype with error handling
int divide(int a, int b, int *result);

int main() {
    int num1 = 10, num2 = 0, res;
    int error = divide(num1, num2, &res);

    if (error) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
        printf("Result: %d\n", res);
    }
    
    return 0;
}

// Function definition with error handling
int divide(int a, int b, int *result) {
    if (b == 0) {
        return -1; // Error code for division by zero
    }
    *result = a / b;
    return 0; // Success
}
