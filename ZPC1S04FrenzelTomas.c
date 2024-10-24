#include <stdio.h>

int obsahuje(const int A[], int a, int element) {
    for (int i = 0; i < a; i++) {
        if (A[i] == element) {
            return 1;
        }
    }
    return 0;
}

int prunik(const int A[], int a, const int B[], int b, int C[]) {
    int k = 0; 
    for (int i = 0; i < a; i++) {
        if (obsahuje(B, b, A[i])) {
            C[k++] = A[i];
        }
    }
    return k; 
}


int srozdil(const int A[], int a, const int B[], int b, int C[]) {
    int k = 0; 
    for (int i = 0; i < a; i++) {
        if (!obsahuje(B, b, A[i])) {
            C[k++] = A[i];
        }
    }
    for (int i = 0; i < b; i++) {
        if (!obsahuje(A, a, B[i])) {
            C[k++] = B[i];
        }
    }
    return k; 
}


int sjednoceni(const int A[], int a, const int B[], int b, int C[]) {
    int k = 0; 
    for (int i = 0; i < a; i++) {
        C[k++] = A[i];
    }
    for (int i = 0; i < b; i++) {
        if (!obsahuje(A, a, B[i])) {
            C[k++] = B[i];
        }
    }
    return k; 
}


int rozdil(const int A[], int a, const int B[], int b, int C[]) {
    int k = 0; 
    for (int i = 0; i < a; i++) {
        if (!obsahuje(B, b, A[i])) {
            C[k++] = A[i];
        }
    }
    return k;
}

void vypis(const int A[], int a, int n) {
    for (int i = 0; i < a; i++) {
        printf("%d", A[i]);
        if ((i + 1) % n == 0 || i == a - 1) {
            printf("\n");
        }
        else {
            printf("  ");
        }
    }
}

int main() {
    int A[] = { 1, 2, 3, 4, 5 };
    int B[] = { 3, 4, 5, 6, 7 };
    int C[10];

    int a = 5; 
    int b = 5; 

    int mohutnost;

    // Průnik
    mohutnost = prunik(A, a, B, b, C);
    printf("Prunik: ");
    vypis(C, mohutnost, 10);

    // Symetrický rozdíl
    mohutnost = srozdil(A, a, B, b, C);
    printf("Symetricky rozdil: ");
    vypis(C, mohutnost, 10);

    // Sjednocení
    mohutnost = sjednoceni(A, a, B, b, C);
    printf("Sjednoceni: ");
    vypis(C, mohutnost, 10);

    // Rozdíl A \ B
    mohutnost = rozdil(A, a, B, b, C);
    printf("Rozdil A \\ B: ");
    vypis(C, mohutnost, 10);

    return 0;
}
