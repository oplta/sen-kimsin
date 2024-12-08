//written by oplta⚡
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char isim[50];
    char cinselTercih[50];
    int yas;

    printf("Adınızı Giriniz ");
    scanf("%s", isim);


    printf("Gay misin? ");
    scanf("%s", cinselTercih);

    printf("Yaşınızı Giriniz ");
    scanf("%d", &yas);



    printf("O zaman senin adın %s ve yaşın %d. \nCinsel yönelimin umrumda değil! Sadece Sormak istedim lol.", isim, yas );

    return 0;
}
