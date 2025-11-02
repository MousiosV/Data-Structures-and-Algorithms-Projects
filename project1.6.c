#include <stdio.h>
#include <stdlib.h>  
#include <string.h>

struct Employee {
    char onoma[50];
    double misthos;
};

int main() {
    struct Employee *upallhloi;
    int n;
    double sunolikaEksoda = 0.0;

    
    printf("Dwse ton arithmo twn upallhlwn: ");
    scanf("%d", &n);

    upallhloi = (struct Employee *) malloc(n * sizeof(struct Employee));
    if (upallhloi == NULL) {
        printf("Memory not allocated\n");
        return -1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nUpallhlos %d\n", i + 1);
        printf("Onoma: ");
        scanf("%s", upallhloi[i].onoma);
        printf("Misthos: ");
        scanf("%lf", &upallhloi[i].misthos);
    }

    printf("\n--- Lista upallhlwn ---\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - %.2lf euro\n", i + 1, upallhloi[i].onoma, upallhloi[i].misthos);
    }

    for (int i = 0; i < n; i++) {
        sunolikaEksoda += upallhloi[i].misthos;
    }

    printf("\nSynolika eksoda etairias: %.2lf euro\n", sunolikaEksoda);

    free(upallhloi);

    return 0;
}
