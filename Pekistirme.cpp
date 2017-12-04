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
	printf("[1]  Öðrenci Geçti mi/Kaldý mý\n");
	printf("[2]  Su Fiyatlandýrmasý\n");
	printf("[3]  [ x +x^3 + x^5 +x^7 ......] iþlemin sonucunu bulan program\n");
	printf("[4]  Büyük, Ortanca, Küçük\n");
	printf("[5]  Girilen 2 sayý arasýndaki 3’e bölünen ve 7’ye bölünmeyen sayýlar\n");
	printf("[6]  Sayý Tahmin Oyunu\n");
	printf("[7]  Girilen sayý kaç basamaklý ve rakamlarý toplamý\n");
	printf("[8]  Dört Ýþlem\n");
	printf("[9]  Girilen sayýnýn en büyük rakamý\n");
	printf("[10] Mükemmel sayý\n");
	printf("Yapmak Ýstediðiniz Ýþlem : ");
	scanf("%d",&anamenu);
	
	switch(anamenu)
	{
		case 1:
			
			printf("***Öðrenci Geçti mi/Kaldý mý***\n");
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
			
			printf("\nOrtalamanýz : %d\n",ortalama);
			if(ortalama>60)
				{
					printf("Tebrikler, dersten geçtiniz!");
				}
			else if(ortalama>40 && ortalama<60)
				{
					printf("Büt sýnavýna girmeniz gerekmektedir.");
				}
			else
				{
					printf("Üzgünüz, dersten kaldýnýz.");
				}
				
			break;
			
		case 2:
			
			printf("***Su Fiyatlandýrmasý***\n");
			int suMiktar,fatura;
			printf("Kullanýlan suyun miktarýný giriniz (m^3): ");
			scanf("%d",&suMiktar);
			if(suMiktar<=100)
			{
				fatura=suMiktar;
				printf("\n%d TL su faturanýz bulunmaktadýr.",fatura);
			}
			else if(suMiktar>100 && suMiktar<=300)
			{
				fatura=100+(suMiktar-100)*1.5;
				printf("\n%d TL su faturanýz bulunmaktadýr.",fatura);
			}
			else if(suMiktar>300 && suMiktar<=600)
			{
				fatura=100+200*1.5+(suMiktar-300)*1.8;
				printf("\n%d TL su faturanýz bulunmaktadýr.",fatura);
			}
			else if(suMiktar>600 && suMiktar<=1000)
			{
				fatura=100+200*1.5+300*1.8+(suMiktar-600)*2;
				printf("\n%d TL su faturanýz bulunmaktadýr.",fatura);
			}
			else
			{
				fatura=100+200*1.5+300*1.8+400*2+(suMiktar-1000)*2.5;
				printf("\n%d TL su faturanýz bulunmaktadýr.",fatura);
			}
			
			break;
			
		case 3:
			
			printf("***[ x +x^3 + x^5 +x^7 ......] iþlemin sonucunu bulan program*** \n");
			int x,n,degerler,toplam;
			static int us=1; //normalde static yazmana gerek yok, ben çoklu programlar yazdýðýmdan deðiþkene deðer verirken istediði için yazdým. sen hoca sorduðunda int us=1; yazarsýn.
			printf("Sayýyý giriniz : ");
			scanf("%d",&x);
			printf("\nÝþlem sayýsý : ");
			scanf("%d",&n);
			for(int i=1; i<=n;i++)
			{
				degerler=pow(x,us);
				printf("%d^%d=%d\n",x,us,degerler);
				us=us+2;
				toplam=toplam+degerler;
			}
			printf("Sonuç = %d",toplam);
			
			break;
		case 4:
			
			printf("***Büyük, Ortanca, Küçük***\n");
			int sayi1,sayi2,sayi3;
			printf("1. Sayýyý girin : ");
			scanf("%d",&sayi1);
			printf("\n2. Sayýyý girin : ");
			scanf("%d",&sayi2);
			printf("\n3. Sayýyý girin : ");
			scanf("%d",&sayi3);
			
			// sayi1 en küçük ise
		    if(sayi1 < sayi3 && sayi1 < sayi2)
			{
		            
		        if(sayi2 < sayi3)
		            printf("En Küçük : %d\nOrtanca : %d\nEn Büyük: %d", sayi1, sayi2, sayi3);
		            
		        else
		            printf("En Küçük : %d\nOrtanca : %d\nEn Büyük: %d", sayi1, sayi3, sayi2);
		    }
        
		    // sayi2 en küçük ise
		    else if(sayi2 < sayi1 && sayi2 < sayi3)
				{
		            
			        if(sayi1 < sayi3)
			            printf("En Küçük : %d\nOrtanca : %d\nEn Büyük: %d", sayi2, sayi1, sayi3);
			            
			        else
			            printf("En Küçük : %d\nOrtanca : %d\nEn Büyük: %d", sayi2, sayi3, sayi1);
		            
		        }
        
		    //sayi3 en küçük ise
		    else
				{
		            
			        if(sayi1 < sayi2)
			            printf("En Küçük : %d\nOrtanca : %d\nEn Büyük: %d", sayi3, sayi1, sayi2);
			            
			        else 
			            printf("En Küçük : %d\nOrtanca : %d\nEn Büyük: %d", sayi3, sayi2, sayi1);
		            
		        }
			
			break;
		case 5:
			
			printf("***Girilen 2 sayý arasýndaki 3’e bölünen ve 7’ye bölünmeyen sayýlar***\n");
			int ilkSayi,ikinciSayi,bSayi,kSayi;
			printf("1. Sayýyý girin : ");
			scanf("%d",&ilkSayi);
			printf("\n2. Sayýyý girin : ");
			scanf("%d",&ikinciSayi);
			printf("Sonuç= ");
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
				printf("Sayýlar Eþit..");
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
			printf("***Sayý Tahmin Oyunu***\n");
			int girilenSayi,rast;
			static int sayac=1,
			srand(time(NULL));
			rast=1+rand()%9;
			do
			{
				printf("Sayý tahmin ediniz (1-10) : ");
				scanf("%d",&girilenSayi);
				if(girilenSayi<rast)
				{
					printf("Yanlýþ cevap! Daha büyük bir sayý giriniz..\n");
					sayac++;
				}
				if(girilenSayi>rast)
				{
					printf("Yanlýþ cevap! Daha küçük bir sayý giriniz..\n");
					sayac++;
				}
				
			}
			while(girilenSayi!=rast);
			printf("Doðru cevap! %d. tahminde doðru sonuca ulaþtýnýz!", sayac);
			
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
		        printf("Basamaklarýn toplamý = %d",btoplam);
			break;
		case 8:
		printf("***Dört Ýþlem***\n");
			float hToplama,hCikarma,hCarpma,hBolme,hsayi1,hsayi2;
			char hislem[2];
			printf("1. Sayýyý giriniz : ");
			scanf("%f",&hsayi1);
			printf("2. Sayýyý giriniz : ");
			scanf("%f",&hsayi2);
			printf("Ýþlem Seçiniz ( + , - , * , / ) : ");
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
					printf("Yanlýþ seçim yaptýnýz..");
					break;
			}
			break;
		case 9:
			printf("***Girilen sayýnýn en büyük rakamý***\n");
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
		        printf("En büyük basamak = %d",enBuyuk);
			break;
		case 10:
			
			printf("***Mükemmel sayý***\n");
			int mSayi,mSonuc;
			mSonuc=0;
			printf("Sayýyý giriniz : ");
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
			printf("\n=%d Sayýsý mükemmel sayýdýr.", mSayi);
			else
			printf("%d Sayýsý mükemmel sayý deðildir.",mSayi);
			
			break;
		default:
			printf("Yanlýþ seçim yaptýnýz..");
			break;
	}
}
