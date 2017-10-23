#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.h>

main()
{
	setlocale(LC_ALL,"Turkish");
	int toplam=0;
	for(int i=1;i<=10;i++)
	toplam+=i;
    printf("toplam   = %d",toplam);
	getch();
	

}
