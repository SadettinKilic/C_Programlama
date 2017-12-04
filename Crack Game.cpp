#include <conio.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

main(){
	system("color A");
	srand(time(NULL));
	setlocale(LC_ALL, "Turkish");
	
	
	int gSayi, rndSayi,toplam=0;
	rndSayi=rand()%100;
	printf("***PASSWORD CRACK***\n");
	printf("You have to find 5 passwords\n");
	printf("\nSafe 1 : Find the number 1-100\n");
	time_t start,end;
    time (&start);
	do{
		printf("-NUMBER : ");
		scanf("%d",&gSayi);
		if(gSayi<rndSayi)
		{
			printf ("HÝGHER\n");
		}
		else if(gSayi>rndSayi)
		{
			printf ("LOWER\n");
		}
	}while(gSayi!=rndSayi);
	time (&end);
	printf ("\tTime : %.2lf\n", difftime (end,start));
	toplam= toplam+ difftime (end,start);
	printf("\tCONGRATS! You got the number!\n\tNext step : Safe 2\n");
	
	rndSayi=rand()%1000;
	printf("\nSafe 2 : Find the number 1-1.000\n");
	time (&start);
	do{
		printf("-NUMBER : ");
		scanf("%d",&gSayi);
		if(gSayi<rndSayi)
		{
			printf ("HÝGHER\n");
		}
		else if(gSayi>rndSayi)
		{
			printf ("LOWER\n");
		}
	}while(gSayi!=rndSayi);
	time (&end);
	printf ("\tTime : %.2lf\n", difftime (end,start));
	toplam= toplam+ difftime (end,start);
	printf("\tCONGRATS! You got the number!\n\tNext step : Safe 3\n");
	
	rndSayi=rand()%10000;
	printf("\nSafe 3 : Find the number 1-10.000\n");
	time (&start);
	do{
		printf("-NUMBER : ");
		scanf("%d",&gSayi);
		if(gSayi<rndSayi)
		{
			printf ("HÝGHER\n");
		}
		else if(gSayi>rndSayi)
		{
			printf ("LOWER\n");
		}
	}while(gSayi!=rndSayi);
	time (&end);
	printf ("\tTime : %.2lf\n", difftime (end,start));
	toplam= toplam+ difftime (end,start);
	printf("\tCONGRATS! You got the number!\n\tNext step : Safe 4\n");
	
	rndSayi=rand()%100000;
	printf("\nSafe 4 : Find the number 1-100.000\n");
	time (&start);
	do{
		printf("-NUMBER : ");
		scanf("%d",&gSayi);
		if(gSayi<rndSayi)
		{
			printf ("HÝGHER\n");
		}
		else if(gSayi>rndSayi)
		{
			printf ("LOWER\n");
		}
	}while(gSayi!=rndSayi);
	time (&end);
	printf ("\tTime : %.2lf\n", difftime (end,start));
	toplam= toplam+ difftime (end,start);
	printf("\tCONGRATS! You got the number!\n\tNext step : Safe 5\n");
	
	rndSayi=rand()%1000000;
	printf("\nSafe 5 : Find the number 1-1.000.000\n");
	time (&start);
	do{
		printf("-NUMBER : ");
		scanf("%d",&gSayi);
		if(gSayi<rndSayi)
		{
			printf ("HÝGHER\n");
		}
		else if(gSayi>rndSayi)
		{
			printf ("LOWER\n");
		}
	}while(gSayi!=rndSayi);
	time (&end);
	printf ("\tTime : %.2lf\n", difftime (end,start));
	toplam= toplam+ difftime (end,start);
	printf(" ----------------------------------------\n");
	printf("| YES! WELL DONE! Take your money and go!|\n");
	printf("| Total Time : %d                       |\n", toplam);
	printf("| $$$$$$$  MONEY ÝS MONEY BABA  $$$$$$$  |\n");
	printf(" ----------------------------------------");
	getch();
}
