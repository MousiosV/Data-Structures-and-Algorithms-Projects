#include <stdio.h>

float upologismos(float a, float b, char praksi) {
    float apotelesma;

    switch (praksi) {
        case '+':
            apotelesma = a + b;
            break;
        case '-':
            apotelesma = a - b;
            break;
        case '*':
            apotelesma = a * b;
            break;
        case '/':
            apotelesma = a / b;
            break;
        default:
            printf("Lathos telestis!\n\n");
            return 0;
    }

    return apotelesma;
}

int main() {
    float x, y, result;
    char praksi;

    while (1) {
        printf("\nDwse telesti (+, -, *, /) h 'e' gia eksodo: ");
        scanf(" %c", &praksi); 

        if (praksi == 'e') {
            printf("Eksodos apo to programma.\n");
            break;
        }

        if (praksi != '+' && praksi != '-' && praksi != '*' && praksi != '/') {
            printf("Mh egkuros telestis!\n");
            continue;
        }

        printf("Dwse duo arithmous: ");
        scanf("%f %f", &x, &y);

        if (praksi == '/' && y == 0) {
            printf("Adunath Praksh: diairesh me to mhden!\n");
            continue;
        }

        result = upologismos(x, y, praksi);

        printf("Apotelesma: %.2f\n", result);
    }

    return 0;
}
