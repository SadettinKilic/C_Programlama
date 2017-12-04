#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

main(){
	setlocale(LC_ALL,"Turkish");
	
	int anamenu;
	printf("***SORULAR***\n");
	printf("[1]  ��renci Ge�ti mi/Kald� m�\n");
	printf("[2]  Su Fiyatland�rmas�\n");
	printf("[3]  [ x +x^3 + x^5 +x^7 ......] i�lemin sonucunu bulan program\n");
	printf("[4]  B�y�k, Ortanca, K���k\n");
	printf("[5]  Girilen 2 say� aras�ndaki 3�e b�l�nen ve 7�ye b�l�nmeyen say�lar\n");
	printf("[6]  Say� Tahmin Oyunu\n");
	printf("[7]  Girilen say� ka� basamakl� ve rakamlar� toplam�\n");
	printf("[8]  D�rt ��lem\n");
	printf("[9]  Girilen say�n�n en b�y�k rakam�\n");
	printf("[10] M�kemmel say�\n");
	printf("Yapmak �stedi�iniz ��lem : ");
	scanf("%d",&anamenu);
	
	switch(anamenu)
	{
		case 1:
			
			printf("***��renci Ge�ti mi/Kald� m�***\n");
			int vize,final,proje,vizeNot,finalNot,projeNot,ortalama;
			printf("Vize Notu : ");
			scanf("%d",&vize);
			printf("\nFinal Notu : ");
			scanf("%d",&final);
			printf("\nProje Notu : ");
			scanf("%d",&proje);
			
			vizeNot = vize*30/100;
			finalNot = final*40/100;
			projeNot = proje*30/100;
			ortalama = vizeNot+finalNot+projeNot;
			
			printf("\nOrtalaman�z : %d\n",ortalama);
			if(ortalama>60)
				{
					printf("Tebrikler, dersten ge�tiniz!");
				}
			else if(ortalama>40 && ortalama<60)
				{
					printf("B�t s�nav�na girmeniz gerekmektedir.");
				}
			else
				{
					printf("�zg�n�z, dersten kald�n�z.");
				}
				
			break;
			
		case 2:
			
			printf("***Su Fiyatland�rmas�***\n");
			int suMiktar,fatura;
			printf("Kullan�lan suyun miktar�n� giriniz (m^3): ");
			scanf("%d",&suMiktar);
			if(suMiktar<=100)
			{
				fatura=suMiktar;
				printf("\n%d TL su faturan�z bulunmaktad�r.",fatura);
			}
			else if(suMiktar>100 && suMiktar<=300)
			{
				fatura=100+(suMiktar-100)*1.5;
				printf("\n%d TL su faturan�z bulunmaktad�r.",fatura);
			}
			else if(suMiktar>300 && suMiktar<=600)
			{
				fatura=100+200*1.5+(suMiktar-300)*1.8;
				printf("\n%d TL su faturan�z bulunmaktad�r.",fatura);
			}
			else if(suMiktar>600 && suMiktar<=1000)
			{
				fatura=100+200*1.5+300*1.8+(suMiktar-600)*2;
				printf("\n%d TL su faturan�z bulunmaktad�r.",fatura);
			}
			else
			{
				fatura=100+200*1.5+300*1.8+400*2+(suMiktar-1000)*2.5;
				printf("\n%d TL su faturan�z bulunmaktad�r.",fatura);
			}
			
			break;
			
		case 3:
			
			printf("***[ x +x^3 + x^5 +x^7 ......] i�lemin sonucunu bulan program*** \n");
			int x,n,degerler,toplam;
			static int us=1; //normalde static yazmana gerek yok, ben �oklu programlar yazd���mdan de�i�kene de�er verirken istedi�i i�in yazd�m. sen hoca sordu�unda int us=1; yazars�n.
			printf("Say�y� giriniz : ");
			scanf("%d",&x);
			printf("\n��lem say�s� : ");
			scanf("%d",&n);
			for(int i=1; i<=n;i++)
			{
				degerler=pow(x,us);
				printf("%d^%d=%d\n",x,us,degerler);
				us=us+2;
				toplam=toplam+degerler;
			}
			printf("Sonu� = %d",toplam);
			
			break;
		case 4:
			
			printf("***B�y�k, Ortanca, K���k***\n");
			int sayi1,sayi2,sayi3;
			printf("1. Say�y� girin : ");
			scanf("%d",&sayi1);
			printf("\n2. Say�y� girin : ");
			scanf("%d",&sayi2);
			printf("\n3. Say�y� girin : ");
			scanf("%d",&sayi3);
			
			// sayi1 en k���k ise
		    if(sayi1 < sayi3 && sayi1 < sayi2)
			{
		            
		        if(sayi2 < sayi3)
		            printf("En K���k : %d\nOrtanca : %d\nEn B�y�k: %d", sayi1, sayi2, sayi3);
		            
		        else
		            printf("En K���k : %d\nOrtanca : %d\nEn B�y�k: %d", sayi1, sayi3, sayi2);
		    }
        
		    // sayi2 en k���k ise
		    else if(sayi2 < sayi1 && sayi2 < sayi3)
				{
		            
			        if(sayi1 < sayi3)
			            printf("En K���k : %d\nOrtanca : %d\nEn B�y�k: %d", sayi2, sayi1, sayi3);
			            
			        else
			            printf("En K���k : %d\nOrtanca : %d\nEn B�y�k: %d", sayi2, sayi3, sayi1);
		            
		        }
        
		    //sayi3 en k���k ise
		    else
				{
		            
			        if(sayi1 < sayi2)
			            printf("En K���k : %d\nOrtanca : %d\nEn B�y�k: %d", sayi3, sayi1, sayi2);
			            
			        else 
			            printf("En K���k : %d\nOrtanca : %d\nEn B�y�k: %d", sayi3, sayi2, sayi1);
		            
		        }
			
			break;
		case 5:
			
			printf("***Girilen 2 say� aras�ndaki 3�e b�l�nen ve 7�ye b�l�nmeyen say�lar***\n");
			int ilkSayi,ikinciSayi,bSayi,kSayi;
			printf("1. Say�y� girin : ");
			scanf("%d",&ilkSayi);
			printf("\n2. Say�y� girin : ");
			scanf("%d",&ikinciSayi);
			printf("Sonu�= ");
			if(ilkSayi<ikinciSayi)
			{
				bSayi=ikinciSayi;
				kSayi=ilkSayi;
			}
			else if(ilkSayi>ikinciSayi)
			{
				bSayi=ilkSayi;
				kSayi=ikinciSayi;
			}
			else
			{
				printf("Say�lar E�it..");
				break;
			}
			for(kSayi; kSayi<=bSayi;kSayi++)
			{
				if(kSayi%3==0 && kSayi%7!=0)
				{
					printf("%d\t",kSayi);
				}
			}
			
			break;
		case 6:
			printf("***Say� Tahmin Oyunu***\n");
			int girilenSayi,rast;
			static int sayac=1,
			srand(time(NULL));
			rast=1+rand()%9;
			do
			{
				printf("Say� tahmin ediniz (1-10) : ");
				scanf("%d",&girilenSayi);
				if(girilenSayi<rast)
				{
					printf("Yanl�� cevap! Daha b�y�k bir say� giriniz..\n");
					sayac++;
				}
				if(girilenSayi>rast)
				{
					printf("Yanl�� cevap! Daha k���k bir say� giriniz..\n");
					sayac++;
				}
				
			}
			while(girilenSayi!=rast);
			printf("Do�ru cevap! %d. tahminde do�ru sonuca ula�t�n�z!", sayac);
			
			break;
		case 7:
			int gSayi,basamak, btoplam;
    
    		printf("Bir sayi giriniz : ");
    		scanf("%d",&gSayi);
   			basamak=0;
   			btoplam=0;
		    do {
		    	btoplam+=gSayi%10;
		        gSayi=gSayi/10;
		        basamak++;
		        }
		        while(gSayi>=1);
		        printf("Basamak sayisi = %d\n",basamak);
		        printf("Basamaklar�n toplam� = %d",btoplam);
			break;
		case 8:
		printf("***D�rt ��lem***\n");
			float hToplama,hCikarma,hCarpma,hBolme,hsayi1,hsayi2;
			char hislem[2];
			printf("1. Say�y� giriniz : ");
			scanf("%f",&hsayi1);
			printf("2. Say�y� giriniz : ");
			scanf("%f",&hsayi2);
			printf("��lem Se�iniz ( + , - , * , / ) : ");
			scanf("%s",&hislem[2]);
			
			hToplama=hsayi1+hsayi2;
			hCikarma=hsayi1-hsayi2;
			hCarpma=hsayi1*hsayi2;
			hBolme=hsayi1/hsayi2;
			switch(hislem[2])
			{
				case '+':
					printf("%f + %f = %f",hsayi1,hsayi2,hToplama);
					break;
				case '-':
					printf("%f - %f = %f",hsayi1,hsayi2,hCikarma);
					break;
				case '*':
					printf("%f * %f = %f",hsayi1,hsayi2,hCarpma);
					break;
				case '/':
					printf("%f / %f = %f",hsayi1,hsayi2,hBolme);
					break;
				default:
					printf("Yanl�� se�im yapt�n�z..");
					break;
			}
			break;
		case 9:
			printf("***Girilen say�n�n en b�y�k rakam�***\n");
			int girSayi,bbasamak,enBuyuk;
    		enBuyuk=0;
    		printf("Bir sayi giriniz : ");
    		scanf("%d",&girSayi);
		    while(girSayi>0) 
			{
		    	bbasamak=girSayi%10;
		    	if(bbasamak>enBuyuk)
		    	{
		    		enBuyuk=bbasamak;
				}
		        girSayi=girSayi/10;
		    }
		        printf("En b�y�k basamak = %d",enBuyuk);
			break;
		case 10:
			
			printf("***M�kemmel say�***\n");
			int mSayi,mSonuc;
			mSonuc=0;
			printf("Say�y� giriniz : ");
			scanf("%d", &mSayi);

			for (int i = 1; i < mSayi; i++)
			{
				if (mSayi%i == 0)
				{
				mSonuc = mSonuc + i;
				printf("%d\t",i);
				}
			}
			
			if (mSonuc == mSayi)
			printf("\n=%d Say�s� m�kemmel say�d�r.", mSayi);
			else
			printf("%d Say�s� m�kemmel say� de�ildir.",mSayi);
			
			break;
		default:
			printf("Yanl�� se�im yapt�n�z..");
			break;
	}
}
