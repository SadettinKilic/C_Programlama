#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

main()// FAKTÖRÝYEL HESAPLAMA PROGRAMI
{
	
	setlocale(LC_ALL,"Turkish");
	
int sayi=0;
int sonuc=1;
printf("bir sayý girin : ");
scanf("%d",&sayi);
for(int i=sayi ; i>=1 ; i--)
sonuc=sonuc*i;

printf("%d ! = %d",sayi,sonuc);

	getch();
}
