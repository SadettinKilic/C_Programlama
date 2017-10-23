#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
main()
{
	setlocale(LC_ALL,"Turkish");
   int sayi1,sayi2;
    printf("Sayýyý girin  : ");
    scanf("%d",& sayi1);
    
	if(sayi1%2==0)
	{
    	printf("Sayý Çifttir");
	}	
   	else
	{
		printf("Sayý Tektir");
	}
	
	
    getch();
	
}
