#include <stdio.h> //Kesin ekle
#include <conio.h> //Kesin ekle
#include <locale.h> //Dili Türkçe yapmak için
#include <stdlib.h> //Random sayýlar için ekle
#include <time.h> //Random sayýlar için ekle
#include <math.h> // karekök, üslü ifadeler için ekle

main()
{
	setlocale(LC_ALL,"Turkish"); // Dili Türkçeye çevirin
	srand(time(NULL)); // Randomlu bir iþlem varsa kesin üste yazýn
	
	// Ana menüde kullanýlan deðiþkenler
	int anasec;
	
	// 1. Soruda kullanýlan deðiþkenler
	int sayi2, rndsayi, soru1sec;
	float soru1top, soru1cik; //karekök ve üslü ifadelerde virgüllü sonuç çýkabileceði için float kullanýn. int kullanýrsanýz sonuç 0 gözükür.

	// 2. soruda kullanýlan deðiþkenler
		// üst taraf
	int ustAdet=7;
	int ustBosluk=1;
	int ustAdet2=0;
		//alt taraf
	int altAdet=2;
	int altBosluk=6;
	int altAdet2=2;

	//3. soruda kullanýlan deðiþkenler
	int girilen1, girilen2, rndsayi2, rakam, toplam;
	float ortalama, enbuyuk=0;
	
	printf("***SORU ZORLUK DERECESÝ***\n"); // \n iþareti bir alt satýra iner.
	printf("[1] Kolay Soru Örneði\n");
	printf("[2] Orta Soru Örneði\n");
	printf("[3] Zor Soru Örneði\n");
	printf("Seçim : ");
	scanf("%d",&anasec); // scanf kullanýrken sayýyý atayacaðýmýz deðiþkeni yazmadan önce & yazmayý unutmayýn.

	switch(anasec) //parantez içinde neye göre seçim yaptýðýmýzý gösteriyoruz
	{
		case 1: //Eðer seçim 1 ise... Not: eðer bu seçim int deðer olan rakamlarla deðilde a, b, c gibi harflerle olsaydý case 'a': þeklinde yazýlmasý gerekirdi.
			printf("\n***KOLAY SORU ÖRNEÐÝ***\n");
			printf("Açýklama : Bu örnekte bir sayý belirleyeceksiniz. 1. sayý 10-99 arasý random olarak belirlenip ekranda yazýcak.\nDaha sonra menüden bu sayýlarla ilgili iþlemler yapabileceksiniz.\n");
			rndsayi=10+rand()%89; // 10dan 99'a kadar olan sayýlar arasýdan random sayý belirler
			printf("1. Sayý (random) : %d\n",rndsayi);
			printf("2. Sayýyý giriniz : ");
			scanf("%d",&sayi2);
			printf("Sayýlarla hangi iþlemler yapýlsýn?\n");
			printf("[1] Ýki sayýnýn toplamý ve toplamlarýnýn karekökü ekranda yazsýn\n");
			printf("[2] Küçük olan sayýnýn büyük olandan çýkarýlmasý ve sonucun küpü ekranda yazsýn\n");
			printf("Seçiminiz : ");
			scanf("%d",&soru1sec);
			
			if(soru1sec==1) // Eðer seçim 1 ise... çift eþittir iþareti kullanmaya dikkat
			{
				soru1top=sayi2+rndsayi; // oluþan random sayýyla bizim yazdýðýmýz sayýyý toplayým soru1top deðiþkenine tanýmlýyoruz.
				printf("Ýki Sayýnýn Toplamý = %f\n",soru1top); // soru1top int deðil float olduðu için %d þeklinde deðil %f þeklinde yazdým.
				printf("Sayýlarýn toplamýnýn karekökü = %f",sqrt(soru1top)); // sqrt karekök almak için kullanýlýr. sqrt(karekök alýnacak deðer)
			}
			else if(soru1sec==2)
			{
				if(sayi2>rndsayi)//Eðer sayi2>rndsayi ise alttaki iþlemleri yap
				{
					soru1cik=sayi2-rndsayi; // sayýlarý çýkarýp soru1cik deðiþkenine ata
					printf("Küçük sayýnýn büyüðünden çýkarýmý = %f\n",soru1cik); // float olduðu için %f
					printf("Sonucun küpü = %f",pow(soru1cik,3)); // x üssü y þeklinde yazmak için pow kullanýlýr. Biz sonucun küpünü istediðimiz için bu þekilde yazdýk.
				}
				else if(sayi2<rndsayi)//Eðer tam tersiyse bu iþlemleri yap
				{
					soru1cik=rndsayi-sayi2;
					printf("Küçük sayýnýn büyüðünden çýkarýmý = %f\n",soru1cik);
					printf("Sonucun küpü = %f",pow(soru1cik,3));
				}
				else // ikiside birbirinden büyük yada küçük deðilse eþittir. Çýkarma sonucu 0 olur.
				{
					soru1cik=0;
					printf("Küçük sayýnýn büyüðünden çýkarýmý = %f\n",soru1cik);
					printf("Sonucun küpü = %f",pow(soru1cik,3));
				}
			}
			else
			{
				printf("Yanlýþ seçim..");
			}
			
			break; // case 1 deki iþlemleri bitirip diðer caselere geçmeden switch döngüsünü bitirmek için kullanýlýr. her case ve deaulttan sonra yazýlýr.
		case 2: // Eðer ana menüdeki seçim 2 ise....
			printf("\n***ORTA SORU ÖRNEÐÝ***\n\n"); // Bu soruda açýklama yapamam tamamen mantýksal döngüyü kafanýzda tek tek çalýþtýrmanýz lazým
			
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
			printf("***ZOR SORU ÖRNEÐÝ***\n\n");
			printf("Açýklama: Girilen iki sayý arasýndan 5 random sayý üreterek o sayýlarýn TEK ya da ÇÝFT olduklarýný yazdýrýp, \nrakamlarý toplamý en büyük olan çift sayýnýn rakamlarý toplamýnýn ortalamasýný gösteren program.\n");
			printf("1. Sayýyý giriniz : ");
			scanf("%d", &girilen1);
			printf("2. Sayýyý giriniz : ");
			scanf("%d", &girilen2);
			for(int i=0; i<5; i++)//5 random sayý istendiði için döngünün 2. kýsmýnda 5 yazdým.
			{
				rndsayi2=girilen1+rand()%(girilen2-girilen1); //rndsayi2 deðiþkenine girilen1 ve girilen2 arasýndan random sayý ürettik.
				if(rndsayi2%2==0)// eðer üretilen random sayý 2 ye bölündüðünde kalan sýfýr oluyorsa... sayý %2 == 0
				{
					printf("%d = ÇÝFT\n", rndsayi2);// sayý = ÇÝFT
					while(rndsayi2) //sayýlarýn rakamlarý toplamý bu kodla bulunuyormuþ. modunu alýyorlarmýþ falan ben bilmiyom.
					{
						rakam=rndsayi2%10;
						rndsayi2=rndsayi2/10;
						toplam+=rakam;
					}              // buraya kadar rakamlarý topladýk
					if(toplam>enbuyuk) // en buyuk sayýyý bulmak için bir enbuyuk deðiþkenimiz var. eðer bulunan toplam enbuyukteki deðerden yüksekse....
					{
						enbuyuk=toplam; // yeni en büyük deðerimiz o oluyor.
					}
					printf("Sayidaki rakamlarin toplamý : %d\n", toplam); // burda da bulunan yoplamý yazdýrýyoruz.
					toplam=0; // eðer toplamý yeniden sýfýrlamazsak, yeni toplam eski toplam deðerinin üstüne eklenir.
				}
				else
				{
					printf("%d = TEK\n", rndsayi2); // tek sayýlarý yazdýrýyoruz...
				}
			}
			
			printf("Rakamlarý Toplamý : %f\n",enbuyuk); // float olduðu için %f kullandýk..
			ortalama=enbuyuk/2; // ortalamayý hesaplatýp ortalama deðiþkenine attýk..
			printf("Rakamlarý Toplamý Ortalamasý : %f",ortalama);// ekrana ortalamayý yazdýrdýk...

			break;
		default: // Eðer belirlediðimiz case'ler dýþýnda bir seçim yapýlýrsa, defaul'un içindeki kod bloðu çalýþýr. 
			printf("Yanlýþ seçim..");
			break;
	}
	
	getch();//Program aniden çalýþýp sonlanmasýn, ekranda kalsýn diye sürekli yazýlýr.
}
