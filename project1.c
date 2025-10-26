#include <stdio.h>

int main() {
    float income, tax = 0;
    char FirstMonth;

    do {
    printf("Dwse to eisodhma tou ergazomenou: ");
    scanf("%f", &income);

    if (income < 0) {
        printf("Akuro input, vale eisodhma megalutero tou 0\n");
    }

    } while (income < 0);

    if (income == 0) {
        tax = 0.0;
    }
    else if (income > 0 && income < 10000) {
        tax = income * 0.09;
    }
    else if (income >= 10000 && income < 20000) {
        tax = income * 0.22;
    }
    else if (income >= 20000 && income < 40000) {
        tax = income * 0.30;
    }
    else {
        tax = income * 0.50;
    }

    printf("plirwthike ton prwto mhna to poso? (y/n): ");
    scanf(" %c", &FirstMonth);

    if (FirstMonth == 'y'){
        tax = tax * 0.9;
    }

    printf("O foros einai: %.2f euro\n", tax);

    return 0;
}