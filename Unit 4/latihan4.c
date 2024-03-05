#include <stdio.h>

float KelilingPersegi(float sisi) {
    return 4 * sisi;
}

float LuasPersegi(float sisi) {
    return sisi * sisi;
}

float VolumeKubus(float sisi) {
    return sisi * sisi * sisi;
}

int main() {
    float sisi;
    printf("Masukkan panjang sisi persegi: ");
    scanf("%f", &sisi);

    printf("Keliling persegi: %.2f\n", KelilingPersegi(sisi));

    printf("Luas persegi: %.2f\n", LuasPersegi(sisi));

    printf("Volume kubus: %.2f\n", VolumeKubus(sisi));

    return 0;
}
