#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"Turkish");
	int girilenSayi,sayac=1, rast;
	srand(time(NULL));
	
	printf("***Say� Tahmin Etme Oyunu***\n");
	rast=1+rand()%9;
	do
	{
		printf("Say� tahmin ediniz (1-10) : ");
		scanf("%d",&girilenSayi);
		if(girilenSayi<rast)
		{
			printf("Yanl�� cevap! Daha b�y�k bir say� giriniz..\n");
			sayac++;
		}
		if(girilenSayi>rast)
		{
			printf("Yanl�� cevap! Daha k���k bir say� giriniz..\n");
			sayac++;
		}
		
	}
	while(girilenSayi!=rast);
	printf("Do�ru cevap! %d. tahminde do�ru sonuca ula�t�n�z!", sayac);
	
	getch();
}
