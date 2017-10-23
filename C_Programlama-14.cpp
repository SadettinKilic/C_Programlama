#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    int sayi=0;
    printf("haftanýn gün sayýsýný giriniz: ");
    scanf("%d",&sayi);
    switch(sayi)
	{
    case 1:
    	printf("Pazartesi");
		break;
    case 2:
    	printf("salý");
		break;
    case 3:
    	printf("çarþamba");
		break;
    case 4:
    	printf("perþembe");
		break;
    case 5:
    	printf("cuma ");
		break;
    case 6:
    	printf("cumartesi");
		break;
    case 7:
    	printf("pazar");
		break;
    default:
    	printf("yanlýþ giriþ yaptýnýz");
    	break;
    		
	}
	
    
	
    getch();
	
}
