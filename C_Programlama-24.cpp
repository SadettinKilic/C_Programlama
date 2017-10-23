#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

main()
{
	
	setlocale(LC_ALL,"Turkish");
	
int adet=1;
for(int i=0;i<7;i++)
{
	for(int j=0;j<adet;j++)
	
		printf("*");
	
	printf("\n");
	adet++;
}

	getch();
}
