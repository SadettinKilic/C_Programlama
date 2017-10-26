#include <stdio.h> //Kesin ekle
#include <conio.h> //Kesin ekle
#include <locale.h> //Dili T�rk�e yapmak i�in
#include <stdlib.h> //Random say�lar i�in ekle
#include <time.h> //Random say�lar i�in ekle
#include <math.h> // karek�k, �sl� ifadeler i�in ekle

main()
{
	setlocale(LC_ALL,"Turkish"); // Dili T�rk�eye �evirin
	srand(time(NULL)); // Randomlu bir i�lem varsa kesin �ste yaz�n
	
	// Ana men�de kullan�lan de�i�kenler
	int anasec;
	
	// 1. Soruda kullan�lan de�i�kenler
	int sayi2, rndsayi, soru1sec;
	float soru1top, soru1cik; //karek�k ve �sl� ifadelerde virg�ll� sonu� ��kabilece�i i�in float kullan�n. int kullan�rsan�z sonu� 0 g�z�k�r.

	// 2. soruda kullan�lan de�i�kenler
		// �st taraf
	int ustAdet=7;
	int ustBosluk=1;
	int ustAdet2=0;
		//alt taraf
	int altAdet=2;
	int altBosluk=6;
	int altAdet2=2;

	//3. soruda kullan�lan de�i�kenler
	int girilen1, girilen2, rndsayi2, rakam, toplam;
	float ortalama, enbuyuk=0;
	
	printf("***SORU ZORLUK DERECES�***\n"); // \n i�areti bir alt sat�ra iner.
	printf("[1] Kolay Soru �rne�i\n");
	printf("[2] Orta Soru �rne�i\n");
	printf("[3] Zor Soru �rne�i\n");
	printf("Se�im : ");
	scanf("%d",&anasec); // scanf kullan�rken say�y� atayaca��m�z de�i�keni yazmadan �nce & yazmay� unutmay�n.

	switch(anasec) //parantez i�inde neye g�re se�im yapt���m�z� g�steriyoruz
	{
		case 1: //E�er se�im 1 ise... Not: e�er bu se�im int de�er olan rakamlarla de�ilde a, b, c gibi harflerle olsayd� case 'a': �eklinde yaz�lmas� gerekirdi.
			printf("\n***KOLAY SORU �RNE��***\n");
			printf("A��klama : Bu �rnekte bir say� belirleyeceksiniz. 1. say� 10-99 aras� random olarak belirlenip ekranda yaz�cak.\nDaha sonra men�den bu say�larla ilgili i�lemler yapabileceksiniz.\n");
			rndsayi=10+rand()%89; // 10dan 99'a kadar olan say�lar aras�dan random say� belirler
			printf("1. Say� (random) : %d\n",rndsayi);
			printf("2. Say�y� giriniz : ");
			scanf("%d",&sayi2);
			printf("Say�larla hangi i�lemler yap�ls�n?\n");
			printf("[1] �ki say�n�n toplam� ve toplamlar�n�n karek�k� ekranda yazs�n\n");
			printf("[2] K���k olan say�n�n b�y�k olandan ��kar�lmas� ve sonucun k�p� ekranda yazs�n\n");
			printf("Se�iminiz : ");
			scanf("%d",&soru1sec);
			
			if(soru1sec==1) // E�er se�im 1 ise... �ift e�ittir i�areti kullanmaya dikkat
			{
				soru1top=sayi2+rndsayi; // olu�an random say�yla bizim yazd���m�z say�y� toplay�m soru1top de�i�kenine tan�ml�yoruz.
				printf("�ki Say�n�n Toplam� = %f\n",soru1top); // soru1top int de�il float oldu�u i�in %d �eklinde de�il %f �eklinde yazd�m.
				printf("Say�lar�n toplam�n�n karek�k� = %f",sqrt(soru1top)); // sqrt karek�k almak i�in kullan�l�r. sqrt(karek�k al�nacak de�er)
			}
			else if(soru1sec==2)
			{
				if(sayi2>rndsayi)//E�er sayi2>rndsayi ise alttaki i�lemleri yap
				{
					soru1cik=sayi2-rndsayi; // say�lar� ��kar�p soru1cik de�i�kenine ata
					printf("K���k say�n�n b�y���nden ��kar�m� = %f\n",soru1cik); // float oldu�u i�in %f
					printf("Sonucun k�p� = %f",pow(soru1cik,3)); // x �ss� y �eklinde yazmak i�in pow kullan�l�r. Biz sonucun k�p�n� istedi�imiz i�in bu �ekilde yazd�k.
				}
				else if(sayi2<rndsayi)//E�er tam tersiyse bu i�lemleri yap
				{
					soru1cik=rndsayi-sayi2;
					printf("K���k say�n�n b�y���nden ��kar�m� = %f\n",soru1cik);
					printf("Sonucun k�p� = %f",pow(soru1cik,3));
				}
				else // ikiside birbirinden b�y�k yada k���k de�ilse e�ittir. ��karma sonucu 0 olur.
				{
					soru1cik=0;
					printf("K���k say�n�n b�y���nden ��kar�m� = %f\n",soru1cik);
					printf("Sonucun k�p� = %f",pow(soru1cik,3));
				}
			}
			else
			{
				printf("Yanl�� se�im..");
			}
			
			break; // case 1 deki i�lemleri bitirip di�er caselere ge�meden switch d�ng�s�n� bitirmek i�in kullan�l�r. her case ve deaulttan sonra yaz�l�r.
		case 2: // E�er ana men�deki se�im 2 ise....
			printf("\n***ORTA SORU �RNE��***\n\n"); // Bu soruda a��klama yapamam tamamen mant�ksal d�ng�y� kafan�zda tek tek �al��t�rman�z laz�m
			
			for(int i=0;i<6;i++)
			{
				for (int a=0;a<ustBosluk;a++)
				{
					printf(" ");
				}
				for(int j=1;j<ustAdet;j++)
				{
					printf("%d",j);
				}
				for(int b=6;b>ustAdet2;b--)
				{
					printf("%d",b);
				}
				ustAdet-=1;
				ustAdet2+=1;
				ustBosluk+=1;
				printf("\n");
			}
			for(int i=0;i<6;i++)
			{
				for (int a=0;a<altBosluk;a++)
				{
					printf(" ");
				}
				for(int j=1;j<altAdet;j++)
				{
					printf("%d",j);
				}
				for(int c=1;c<altAdet2;c++)
				{
					printf("%d",c);
				}
				altAdet+=1;
				altAdet2+=1;
				altBosluk-=1;
				printf("\n");
			}
			
			break;
		case 3:
			printf("***ZOR SORU �RNE��***\n\n");
			printf("A��klama: Girilen iki say� aras�ndan 5 random say� �reterek o say�lar�n TEK ya da ��FT olduklar�n� yazd�r�p, \nrakamlar� toplam� en b�y�k olan �ift say�n�n rakamlar� toplam�n�n ortalamas�n� g�steren program.\n");
			printf("1. Say�y� giriniz : ");
			scanf("%d", &girilen1);
			printf("2. Say�y� giriniz : ");
			scanf("%d", &girilen2);
			for(int i=0; i<5; i++)//5 random say� istendi�i i�in d�ng�n�n 2. k�sm�nda 5 yazd�m.
			{
				rndsayi2=girilen1+rand()%(girilen2-girilen1); //rndsayi2 de�i�kenine girilen1 ve girilen2 aras�ndan random say� �rettik.
				if(rndsayi2%2==0)// e�er �retilen random say� 2 ye b�l�nd���nde kalan s�f�r oluyorsa... say� %2 == 0
				{
					printf("%d = ��FT\n", rndsayi2);// say� = ��FT
					while(rndsayi2) //say�lar�n rakamlar� toplam� bu kodla bulunuyormu�. modunu al�yorlarm�� falan ben bilmiyom.
					{
						rakam=rndsayi2%10;
						rndsayi2=rndsayi2/10;
						toplam+=rakam;
					}              // buraya kadar rakamlar� toplad�k
					if(toplam>enbuyuk) // en buyuk say�y� bulmak i�in bir enbuyuk de�i�kenimiz var. e�er bulunan toplam enbuyukteki de�erden y�ksekse....
					{
						enbuyuk=toplam; // yeni en b�y�k de�erimiz o oluyor.
					}
					printf("Sayidaki rakamlarin toplam� : %d\n", toplam); // burda da bulunan yoplam� yazd�r�yoruz.
					toplam=0; // e�er toplam� yeniden s�f�rlamazsak, yeni toplam eski toplam de�erinin �st�ne eklenir.
				}
				else
				{
					printf("%d = TEK\n", rndsayi2); // tek say�lar� yazd�r�yoruz...
				}
			}
			
			printf("Rakamlar� Toplam� : %f\n",enbuyuk); // float oldu�u i�in %f kulland�k..
			ortalama=enbuyuk/2; // ortalamay� hesaplat�p ortalama de�i�kenine att�k..
			printf("Rakamlar� Toplam� Ortalamas� : %f",ortalama);// ekrana ortalamay� yazd�rd�k...

			break;
		default: // E�er belirledi�imiz case'ler d���nda bir se�im yap�l�rsa, defaul'un i�indeki kod blo�u �al���r. 
			printf("Yanl�� se�im..");
			break;
	}
	
	getch();//Program aniden �al���p sonlanmas�n, ekranda kals�n diye s�rekli yaz�l�r.
}
