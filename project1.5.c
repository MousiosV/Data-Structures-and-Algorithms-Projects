#include <stdio.h>
#include <string.h>

struct Company {
    char name[50];
    int employees;
    double expenses;
    double income;
};

int main() {
    struct Company c1, c2, sygxwneush;
    double diff1, diff2;

    
    printf("Dwse to onoma ths 1hs etaireias: ");
    scanf("%s", c1.name);
    printf("Dwse ton arithmo twn upallhlwn: ");
    scanf("%d", &c1.employees);
    printf("Dwse sunolika eksoda: ");
    scanf("%lf", &c1.expenses);
    printf("Dwse sunolika esoda: ");
    scanf("%lf", &c1.income);

    printf("\nDwse to onoma ths 2hs etaireias: ");
    scanf("%s", c2.name);
    printf("Dwse ton arithmo twn upallhlwn: ");
    scanf("%d", &c2.employees);
    printf("Dwse sunolika eksoda: ");
    scanf("%lf", &c2.expenses);
    printf("Dwse sunolika esoda: ");
    scanf("%lf", &c2.income);

    diff1 = c1.income - c1.expenses;
    diff2 = c2.income - c2.expenses;

    printf("\n--- Stoixeia 1hs Etaireias ---\n");
    printf("Name: %s\n", c1.name);
    printf("Employees: %d\n", c1.employees);
    printf("Income - Expenses = %.2lf\n", diff1);

    printf("\n--- Stoixeia 2hs Etaireias ---\n");
    printf("Name: %s\n", c2.name);
    printf("Employees: %d\n", c2.employees);
    printf("Income - Expenses = %.2lf\n", diff2);

    strcpy(sygxwneush.name, c1.name);
    strcat(sygxwneush.name, "-");
    strcat(sygxwneush.name, c2.name);

    sygxwneush.employees = c1.employees + c2.employees;
    sygxwneush.expenses = c1.expenses + c2.expenses;
    sygxwneush.income = c1.income + c2.income;

    printf("\n--- Stoixeia Sugxwneumenhs Etairias ---\n");
    printf("Name: %s\n", sygxwneush.name);
    printf("Employees: %d\n", sygxwneush.employees);
    printf("Income: %.2lf\n", sygxwneush.income);
    printf("Expenses: %.2lf\n", sygxwneush.expenses);

    if (sygxwneush.income > sygxwneush.expenses)
        printf("H Sugxwneumenh etairia exei kerdos\n");
    else if (sygxwneush.income == sygxwneush.expenses)
        printf("H etairia einai sto mhden\n");
    else
        printf("H Sugxwneumenh etairia exei zhmia\n");

    return 0;
}