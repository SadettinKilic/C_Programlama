/*67 ile 182 say�lar� aras�nda rastgele �retilen 10 adet say�y�
ekranda tek,�ift �eklinde g�steren ve �ift olanlar�n ortalamas�n� ekrana 
yazd�ran program. */

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
		
			printf("%d �ift say�\n",sayi);
			toplam=toplam+sayi;
			sayac=sayac+1;
		}
		else
		{
			printf("%d Tek say� \n",sayi);
		}
	}
	
	printf("�ift sayilarin ortalamasi = %d",toplam/sayac);
	
	getch();
}
