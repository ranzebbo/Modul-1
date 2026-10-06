#include <stdio.h>
#include <math.h>

int main() {
    int alas = 5;
    int tinggi = 12;
    float sisiMiring = sqrt(alas * alas + tinggi * tinggi);
    float keliling = alas + tinggi + sisiMiring;
    float luas = 0.5f * alas * tinggi;

    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", alas);
    printf("Sisi B = %d cm\n", tinggi);
    printf("Sisi C = %.0f cm\n", sisiMiring);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm persegi\n", luas);

    return 0;
}