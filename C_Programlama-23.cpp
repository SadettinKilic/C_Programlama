/*67 ile 182 sayýlarý arasýnda rastgele üretilen 10 adet sayýyý
ekranda tek,çift þeklinde gösteren ve çift olanlarýn ortalamasýný ekrana 
yazdýran program. */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi,toplam,sayac=0;
	srand(time(NULL));
	for(int i=0; i<10;i++)
	{
		sayi=67+rand()%115;
		if(sayi%2==0)
		{
		
			printf("%d Çift sayý\n",sayi);
			toplam=toplam+sayi;
			sayac=sayac+1;
		}
		else
		{
			printf("%d Tek sayý \n",sayi);
		}
	}
	
	printf("Çift sayilarin ortalamasi = %d",toplam/sayac);
	
	getch();
}
