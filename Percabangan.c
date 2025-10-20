#include <stdio.h>

int main (){
    int nilai;
    printf("Masukkan nilai kamu: ");
    scanf("%d", &nilai);

    if (nilai >= 80) {
        printf("Nilai kamu A\n");
    } else if (nilai >= 70) {
        printf("Nilai kamu B\n");
    } else if (nilai >= 60) {
        printf("Nilai kamu C\n");
    } else if (nilai >= 50) {
        printf("Nilai kamu D\n");
    } else {
        printf("Nilai kamu E\n");
    }
    return 0;
}