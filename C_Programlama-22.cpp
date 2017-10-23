#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
	int sayi=0;
	srand(time(NULL));
	for(int i=0; i<20; i++)
	{
		sayi=25+rand()%225; //25 ile 250, 250 dahil deðil
		if(sayi>100&&sayi<175) // (sayi>100&&sayi<175&&sayi%2==0)
		{
			if(sayi%2==0)
			{
				printf("Sayý: %d\n",sayi);
			}
		}
	}
	getch();
}
