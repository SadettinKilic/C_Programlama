#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
   int sayi1,sayi2;
    printf("Birinci sayýyý girin  :");
    scanf("%d",&sayi1);
    printf("Ýkinci sayýyý girin  :");
    scanf("%d",&sayi2);
    if(sayi1 > sayi2)
	{
    	printf("birinci sayý ikinci sayýdan büyüktür");
	}
	else if(sayi2 > sayi1)
	{
		printf("ikinci sayý birinci sayýdan büyüktür");

	}
	else
	{
		printf("Sayýlar eþittir.");
	}

	
    getch();
	
}
