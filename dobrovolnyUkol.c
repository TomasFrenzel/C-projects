#include <stdio.h>

//1
void Znamka(int n) {
    if (n >= 90) {
        printf("Znamka: A\n");
    } else if (n >= 80) {
        printf("Znamka: B\n");
    } else if (n >= 70) {
        printf("Znamka: C\n");
    } else if (n >= 60) {
        printf("Znamka: D\n");
    } else if (n >= 50) {
        printf("Znamka: E\n");
    } else {
        printf("Znamka: F\n");
    }
}
//2
void PocetLichychASudych(int A[], int n) {
    int pocet_lichych = 0;
    int pocet_sudych = 0;

    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            pocet_sudych++;
        } else {
            pocet_lichych++;
        }
    }

    printf("Pocet lichych cisel: %d\n", pocet_lichych);
    printf("Pocet sudych cisel: %d\n", pocet_sudych);
}
//3
int MinMaxRozdil(int pole[], int velkost) {
    int minimum = pole[0];
    int maximum = pole[0];

    for (int i = 1; i < velkost; i++) {
        if (pole[i] < minimum) {
            minimum = pole[i];
        }
        if (pole[i] > maximum) {
            maximum = pole[i];
        }
    }

    return maximum - minimum;
}

int main() {
    //1
    int body;

    printf("Zadej pocet bodu (0-100): ");
    scanf("%d", &body);

    Znamka(body);
    //2
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(A) / sizeof(A[0]);

    PocetLichychASudych(A, n);
    //3
    int hodnoty[] = {5, 1, 9, 3, 7};
    int pocet = sizeof(hodnoty) / sizeof(hodnoty[0]);

    int rozdíl = MinMaxRozdil(hodnoty, pocet);
    printf("Rozdíl mezi největším a nejmenším prvkem je: %d\n", rozdíl);

    return 0;

}



