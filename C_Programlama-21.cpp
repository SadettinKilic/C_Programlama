#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
// rasgele sayý seçen program

main()
{
	int sayi=0;
	srand(time(NULL));
	sayi=5+rand()%100; // 5 den baþlýyor 105, 105 dahil deðil
	//sayi=3+rand()%5;  "3 den baþlýyor 3 4 5 6 7
	printf("%d \n",sayi);
	getch();
}
