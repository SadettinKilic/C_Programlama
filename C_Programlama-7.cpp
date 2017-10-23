#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Turkish");
    char ifade[20];
    printf("Bir kelime giriniz   :   ");
    gets(ifade);
    printf("Girilen kelime  : %s",ifade);
    getch();
    
	
}
