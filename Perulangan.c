#include <stdio.h>

int main(){
    int jumlah_tugas = 10;

    for(int i = 1; i <= jumlah_tugas; i++){
        printf("Mengumpulkan tugas ke-%d\n", i);
    }

    printf("Yippie, akhirnya gw turu");

    return 0;
}