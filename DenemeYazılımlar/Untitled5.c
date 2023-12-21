#include <stdlib.h>
#include <stdio.h>

struct bilgi{
    char ad[25];
    char soyad[25];
    char dogum_t[10];
    char dogum_y[30];
    char uni[40];
    char bolum[40];
    char ogrenci_ID[20];
    char tw_adresi[30];
    char ikamet[25];

};

FILE * fptr;

int main(){

    struct bilgi liste[1];

    printf("Isim:\t"); scanf(" %s", liste[1].ad);
    printf("\nSoyIsim:\t"); scanf(" %s", liste[1].soyad);
    printf("\nDogumTarihi:\t"); scanf(" %s", liste[1].dogum_t);
    printf("\nDogumYeri:\t"); scanf(" %s", liste[1].dogum_y);
    printf("\nUniversite:\t"); scanf(" %s", liste[1].uni);
    printf("\nUniBolumu:\t"); scanf(" %s", liste[1].bolum);
    printf("\nOgrenciNumarasi:\t"); scanf(" %s", liste[1].ogrenci_ID);
    printf("\nTwitter adresi:\t"); scanf(" %s", liste[1].tw_adresi);
    printf("\nYasadigi sehir:\t"); scanf(" %s", liste[1].ikamet);

    fptr = fopen("C:\\Users\\Emrullah\\informations\\1.txt", "w");

    fprintf(fptr," Isim: %s\n Soyisim: %s\n DogumTarihi: %s\n DogumYeri: %s\n Universite: %s\n UniversiteBolumu: %s\n OgrenciNumarasi: %s\n TwAdresi: %s\n YasadigiSehir: %s", liste[1].ad, liste[1].soyad, liste[1].dogum_t, liste[1].dogum_y, liste[1].uni, liste[1].bolum, liste[1].ogrenci_ID, liste[1].tw_adresi, liste[1].ikamet);

    fclose(fptr);

    return 0;
}
