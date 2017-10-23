#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

main()
{
	
	setlocale(LC_ALL,"Turkish");
	
	char kelime[20];
	printf("bir kelime girin : ");
	scanf("%s",kelime);
	printf("tekrar sayýsýný girin : ");
	int adet;
	scanf("%d",&adet);	
	for(int i=1;i<=adet;i++)
	printf("%s \n",kelime);
	getch();
	

}
