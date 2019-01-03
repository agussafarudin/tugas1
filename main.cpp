#include <stdio.h>
#include <conio.h>
int ulang(int n);

int main(void)
{
    int n;
    printf(" -------Menampilkan Tulisan Sebanyak (n) Kali------- \n \n \n");
    printf("Masukkan Nilai (n) :");
    scanf("%d", &n);
    ulang(n);
    getch();

}
int ulang(int n)
{
    int i;
    for (i=1;i<=n;i++)
        printf("Algoritma dan Pemrograman \n");
    return (i);
}
