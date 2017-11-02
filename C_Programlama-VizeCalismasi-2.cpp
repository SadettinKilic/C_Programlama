#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	int girilenSayi,sayac=1, rast;
	srand(time(NULL));
	
	printf("***Sayý Tahmin Etme Oyunu***\n");
	rast=1+rand()%9;
	do
	{
		printf("Sayý tahmin ediniz (1-10) : ");
		scanf("%d",&girilenSayi);
		if(girilenSayi<rast)
		{
			printf("Yanlýþ cevap! Daha büyük bir sayý giriniz..\n");
			sayac++;
		}
		if(girilenSayi>rast)
		{
			printf("Yanlýþ cevap! Daha küçük bir sayý giriniz..\n");
			sayac++;
		}
		
	}
	while(girilenSayi!=rast);
	printf("Doðru cevap! %d. tahminde doðru sonuca ulaþtýnýz!", sayac);
	
	getch();
}
