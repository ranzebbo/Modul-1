#include <stdio.h>

int main() {
    int putaran = 5;
    float jarak = 14.0f;
    float pi = 3.14f;
    float keliling = jarak / putaran;
    float jariJari = keliling / (2 * pi);

    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak);
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jariJari);

    return 0;
}