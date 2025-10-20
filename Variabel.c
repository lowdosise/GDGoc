#include <stdio.h>

int main() {
    int angkatan = 25;
    char inisial = 'F';
    char jurusan [25] = "Teknik Informatika";
    float ipk = 3.75;

    
    printf("Kamu angkatan berapa? %d\n", angkatan);
    printf("Inisial nama kamu apa? %c\n", inisial);
    printf("Jurusan kamu apa? %s\n", jurusan);
    printf("Nilai ipk kamu berapa? %.2f\n", ipk);

    return 0;
}