#include <stdio.h>
#include <math.h>

int main () {
    double L;
    double x = 2.0; // vazw endiktikh timh gia to x gia na upologistei to sum
    double sum = 0.0;
    int N;

    printf("Dwse thn timh tou L: ");
    scanf("%lf", &L);

    do {
        printf("Dwse thn timh tou N (0 < N < 10): ");
        scanf("%d", &N);

        if(N <= 0 || N >= 10){
            printf("Akuro Input, bale timh anamesa sta oria pou sou dothikan \n");
        }
    } while (N <= 0 || N >= 10);

    for (int i = 0; i <= N; i++) {
        double apotelesma = pow(x, i) + (double)i / (double)N;
        sum += apotelesma;
    }

    double f = L *sum;

    printf("\n Gia x = %.1f, L = %.2f, N = %d\n", x, L, N);
    printf("to f(%.1lf) = %.2f \n", x, f);

    return 0;
}


