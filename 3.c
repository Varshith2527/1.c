#include <stdio.h>

int main() {
    double income, taxable_income, tax = 0.0;

    printf("Enter the income: ");
    scanf("%lf", &income);

    if (income <= 150000) {
        printf("NO TAX\n");
        tax = 0.0;
    } 
    else {
        taxable_income = income - 150000;

        if (income <= 300000) {
            tax = taxable_income * 0.10;
        } 
        else if (income <= 500000) {
            tax = taxable_income * 0.20;
        } 
        else {
            tax = taxable_income * 0.30;
        }
    }

    printf("TAX = %.2lf\n", tax);

    return 0;
}
