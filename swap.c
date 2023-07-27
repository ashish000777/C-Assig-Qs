#include <stdio.h>

void swapWithTempVar(double *a, double *b) {
    double temp = *a;
    *a = *b;
    *b = temp;
}

void swapWithoutTempVar(double *a, double *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    double num1, num2;
    int choice;

    do {
        printf("Menu\n");
        printf("1. Swap using a temporary variable\n");
        printf("2. Swap without using a temporary variable\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                swapWithTempVar(&num1, &num2);
                printf("After swapping, first number = %.2lf\n", num1);
                printf("After swapping, second number = %.2lf\n", num2);
                break;
            case 2:
                printf("Enter the first number: ");
                scanf("%lf", &num1);
                printf("Enter the second number: ");
                scanf("%lf", &num2);
                swapWithoutTempVar(&num1, &num2);
                printf("After swapping, first number = %.2lf\n", num1);
                printf("After swapping, second number = %.2lf\n", num2);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
