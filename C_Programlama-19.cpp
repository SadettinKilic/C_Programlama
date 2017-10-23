#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

main()
{
	
	setlocale(LC_ALL,"Turkish");
	
//KLAVYEDEN GÝRÝLEN SAYININ 50 VE 200 ARASINDAKÝ KAÇ RAKAMI KALANSIZ BÖLDÜÐÜNÜ GÖSTEREN PROGRAM

int sayi=0;
int adet=0;
printf("Sayý giriniz : ");
scanf("%d",&sayi);
for(int i=50;i<200;i++)
{
	if(i%sayi==0)
	{
	adet++;
	printf("%d \n",i);
	}
}

printf("%d adet sayýyý kalansýz böler",adet);
	
	getch();
	

}
