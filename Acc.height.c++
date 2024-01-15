#include <stdio.h>

int main() {
    float principal, interestRate, balance, interest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the interest rate (in percentage): ");
    scanf("%f", &interestRate);

    balance = principal;

    for (int year = 1; year <= 5; year++) {
        interest = balance * interestRate / 100;

        balance += interest;

        printf("Balance at the end of year %d: %.2f\n", year, balance);
    }

    return 0;
}





