
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//Membuat struct untuk peserta dengan data : No, Nama, Jam, Menit, Detik, dan Jumlah (dalam detik)
struct data
{
    char nama[20]; //Nama yang digunakan maksimal 20 karakter
    int jam;
    int menit;
    int detik;
    int total;
};
int main()
{
    int i, j, k;
    int  jumlah;
    printf("\t\t\tData Peserta yang Akan disorting\n");
    printf("\t\t\t--------------------------------\n");
    //membuat variabel baru dari peserta dengan nama peserta menggunakan array sejumlah inputan jumlah, dan membuat variabel c
    struct data peserta[20], c;
    //memasukan jumlah peserta kedalam variabel jumlah
    printf("Masukan Jumlah Peserta : ");
    scanf("%d", &jumlah);
    //input data peserta dari peserta
    for(i=0;i<jumlah;i++)
    {
        printf("\nMasukan Nama : ");
        scanf(" %[^\n]", &peserta[i].nama);
        printf("Masukan jam : ");
        scanf("%d", &peserta[i].jam);
        printf("Masukan menit : ");
        scanf("%d", &peserta[i].menit);
        printf("Masukan detik : ");
        scanf("%d", &peserta[i].detik);
        peserta[i].total=(peserta[i].jam*3600)+(peserta[i].menit*60)+(peserta[i].detik*1);
        printf("\n");
    }
    printf("Data Peserta Sebelum Diurutkan :\n\n");
    printf("Nama\tJam\tMenit\tDetik\tTotal\n");
    for(i=0;i<jumlah;i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\n", peserta[i].nama, peserta[i].jam, peserta[i].menit, peserta[i].detik, peserta[i].total);
    }
    //sorting
    for(j=0;j<jumlah-1;j++)
    {
        for(k=0;k<jumlah-1;k++)
        {
            if(peserta[k].total > peserta[k+1].total)
            {
                c=peserta[k]; //mengisi c dengan isi dari peserta sekarang
                peserta[k]=peserta[k+1]; //mengisi peserta sekarang dengan peserta selanjutnya
                peserta[k+1]=c; //mengisi peserta selanjutnya dengan c
            }
        }
    }
    printf("\nData Peserta Setelah Diurutkan :\n\n");
    printf("Nama\tJam\tMenit\tDetik\tTotal\n");
    //tampilkan hasil setelah diurutkan
    for(i=0;i<jumlah;i++)
    {
        printf("%s\t%d\t%d\t%d\t%d\n", peserta[i].nama, peserta[i].jam, peserta[i].menit, peserta[i].detik, peserta[i].total);
    }
}
