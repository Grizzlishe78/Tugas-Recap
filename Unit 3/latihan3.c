#include <stdio.h>

int main() {
    int arr ;

    scanf("%d", &arr);
    int nilai_elemen[arr];

    for (int i = 0; i < arr; i++) {
        scanf("%d", &nilai_elemen[i]);
    }

    int total = 0;
    for (int i = 0; i < arr; i++) {
        total += nilai_elemen[i];
    }

    printf("%d\n", total);

    return 0;
}
