#include <stdio.h>

int main() {
    printf("Hello\n");                   // Fixed the typo and added a newline
    printf("Zadejte cislo: ");            // Prompt for input
    int cisloA;
    scanf("%d", &cisloA);                 // Read an integer input
    printf("Zadane cislo je: %d\n", cisloA);  // Print the entered number
    return 0;                             
}