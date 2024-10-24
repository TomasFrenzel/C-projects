#include <stdio.h>


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
    int hodnoty[] = {5, 1, 9, 3, 7};
    int pocet = sizeof(hodnoty) / sizeof(hodnoty[0]);

    int rozdíl = MinMaxRozdil(hodnoty, pocet);
    printf("Rozdíl mezi největším a nejmenším prvkem je: %d\n", rozdíl);

    return 0;
}
