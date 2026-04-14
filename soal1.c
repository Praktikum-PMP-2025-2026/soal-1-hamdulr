/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 01 - Overview of C Language
 *   Hari dan Tanggal    : Selasa, 14 April 2026
 *   Nama (NIM)          : Hamzah Abdul Rahim (13224066)
 *   Nama File           : soal2.c
 *   Deskripsi           : Soal 1 - Menara Lampu, praktikum PMP hari selasa
 * 
 */

#include <stdio.h>
#include <string.h>

int jumlahdigit(int n){
    int sum = 0;
    int c = n;
    while(c!=0){
        int cur;
        cur = c%10;
        sum+=cur;
        c = c/10;
    }
    //printf("sum of %d = %d\n",n,sum);
    return sum;
}

  
int main() {
    int N;
    scanf("%d", &N);

    for(int i = 1;i<=N;i++){
        if(i % 2 == 0 && i % 3 == 0){
            printf("BIRU\n");
        }
        else if(i%3==0){
            printf("MERAH\n");
        }
        else if(i%2==0){
            printf("KUNING\n");
        }
        else if(jumlahdigit(i)%2 == 0){
            printf("HIJAU\n");
        }
        else{
            printf("%d\n",i);
        }
    }
}
 
