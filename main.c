#include <stdio.h>
#include <stdint.h>

int main() {
    printf("\nSIMPLE CALCULATOR");

    printf("\n1. Basic Calculation");
    printf("\n2. GCD");
    printf("\n3. Exit");

    printf("\nSelect option [1-3]: ");


    uint8_t option;
    scanf("%hhu", &option);
    printf("\nMode selected: %hhu", option);

    if (option == 1) {
        uint32_t first_number, second_number;
        char operator;

        printf("\nEnter first number: ");
        scanf("%u", &first_number);

        printf("\nEnter operator [+,-,*,/]: ");
        while (getchar() != '\n');
        scanf("%c", &operator);

        printf("\nEnter second number: ");
        scanf("%u", &second_number);

        switch (operator)
        {
        case '+':
            printf("\n%u + %u = %u", first_number, second_number, first_number + second_number);
            break;
        
        case '-':
            printf("\n%u - %u = %d", first_number, second_number, first_number - second_number);
            break;
        
        case '*':
            printf("\n%u * %u = %llu", first_number, second_number, (unsigned long long) first_number * second_number);
            break;
        
        case '/':
            printf("\n%u / %u = %g", first_number, second_number,(double) first_number / second_number);
            break;
        
        default:
            break;
        }
    }
    else if(option == 2) {
         uint32_t first_number, second_number;

        printf("\nEnter first number: ");
        scanf("%u", &first_number);
        printf("\nFirst_number: %u\n", first_number);

        printf("\nEnter second number: ");
        scanf("%u", &second_number);
        printf("\nSecond_number: %u\n", second_number);
    }
    return 0;
}