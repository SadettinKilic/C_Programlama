#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    int sayi1,sayi2,secim;
    printf("Birinci sayýsý giriniz :");
    scanf("%d",&sayi1);
    printf("Ýkinci sayýsý giriniz :");
    scanf("%d",&sayi2);
    printf("***MENÜ***\n");
    printf("[1] TOPLAMA\n");
    printf("[2] ÇIKARMA\n");
    printf("[3] ÇARPMA\n");
    printf("[4] BÖLME\n");
    printf("Seçiminiz : ");
    scanf("%d",&secim);
       
    
    switch(secim)
	{
   		 case 1:
    		printf("toplam = %d",sayi1+sayi2);
			break;
   		 case 2:
    		printf("fark  =%d",sayi1-sayi2);
			break;
   		 case 3:
    		printf("çarpým  =%d",sayi1*sayi2);
			break;
   		 case 4:
    		printf("bölüm  =%d",sayi1/sayi2);
			break;
   		 default:
    		printf("hatalý seçim yaptýnýz");
    		break;
	}
	
    
	
    getch();
	
}
