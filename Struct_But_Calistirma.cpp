/*STRUCT YAPISI
	1 TANE "lig" DEÐÝÞKENÝ ÝSMÝNDE LÝG EKLENECEK (LÝG ADI VE ÜLKESÝ GÝRÝLECEK) 
	LÝGE BAÐLI OLARAK "takim" DEÐÝÞKENÝ ÝSMÝNDE 2 TAKIM EKLENECEK (TAKIM ADI VE PUANI GÝRÝLECEK)
	TAKIMLARA BAÐLI OLARAK "oyuncu" DEÐÝÞKEN ÝSMÝNDE 2 TANE FUTBOLCU EKLENECEK (FUTBOLCU ADI, YAÞI VE OYNADIÐI POZÝSYON EKLENECEK)
	ÖRNEK ÇIKTI :
				LÝG BÝLGÝLERÝ
				LÝG ADI : ALGORÝTMA SÜPER LÝG
				LÝGÝN ÜLKESÝ : TÜRKÝYE
				1. TAKIMIN ADI : BÜTSPOR
				1. TAKIMIN PUANI : 25
				1. TAKIMIN OYUNCU BÝLGÝLERÝ
				SADO	19	DEFANS
				KEMAL	18	ORTASAHA
				2. TAKIMIN ADI : GEÇÝCEZSPOR
				2. TAKIMIN PUANI : 50
				2. TAKIMIN OYUNCU BÝLGÝLERÝ
				GOKSU	23	FORVET
				BESTE	18	KALECÝ 
				*/
				
#include <conio.h>
#include <stdio.h>
/* Burda struct yapýsýna en alt kademe olan futbolculardan baþlayarak en üst kademeye doðru sýrayla yazýyoruz.
   Sebebi : Derleyici programý ilk satýrdan itibaren okuyacaðý için en baþa ligler yapýsýný yazsaydýk, "struct takimlar takim[2];" satýrýný okuduðunda
   			önceki satýrlarda takimlar yapýsýný okumadýðý için hata verirdi.*/
struct futbolcular{
	char futbolcu_ad[25]; //25 yazmamýzýn sebebi "en fazla 25 karakterden oluþabilir" þeklinde sýnýrlandýrmak.
	int futbolcu_yas;
	char mevki[25];
}; 

struct takimlar{
	char takim_adi[25];
	int takim_puan;
	struct futbolcular oyuncu[2]; //Burada futbolcular yapýsýný takýmlar yapýsýyla birleþtirdik. Bunu "struct yapý_adý deðiþkenadý[sayi]" þeklinde yazabilirsiniz.
};

struct ligler{
	char lig_adi[25];
	char lig_ulkesi[25];
	struct takimlar takim[2];
}lig;//ana yapýya deðiþken ekleneceði zaman buraya yazýlýr. printf ya da scanf ile çaðýrdýðýmýz zaman burdan baþlanacak.

main(){
	//Önce Bilgileri alýp struct yapýsýnýn içine atayacaðýz.
	printf("Lig Bilgilerini Giriniz\n");
	printf("Lig Adi : ");
	scanf("%s",lig.lig_adi);//%s ile yazý deðerinde bir girdi yapýlacaðýný belirledik. Sonra da girilecek bilginin lig deðiþkeni içindeki lig_adi kýsmýna ait olduðunu belirledik.
	printf("Ligin Bulundugu Ulke : ");
	scanf("%s",lig.lig_ulkesi);
	for(int i=0; i<2;i++)//girilecek 2 adet takým olduðu için bu þekilde bir for döngüsü yazdýk.
	{
		printf("%d. Takim Bilgilerini Giriniz\n",i+1);/*for döngüsünde direk i ye 1 dersek takimin 0. elemaný boþ kalýr.
											O yüzden for 0 dan baþlayýp burda i+1 yazarak 1. Takým... þeklinde gösteriyoruz.*/
		printf("%d. Takimin Adi : ",i+1);
		scanf("%s",lig.takim[i].takim_adi);//takim yazdýktan sonra [i] yazmamýzýn sebebi 2 adet takým eklenmesi. For'un i deðiþkenine göre eklenecek.
		printf("%d. Takimin Puani : ",i+1);
		scanf("%d",&lig.takim[i].takim_puan);//%d ile sayý deðerinde bir girdi alýnacaðýný belirledik. scanf'te sayý girdisi alýrken & iþaretini unutmayýn.
		printf("Futbolcu Bilgilerini Giriniz\n");
		for(int j=0;j<2;j++) //Bu for döngüsü de her takým için 2 adet futbolcu eklenmesi için.
		{
			printf("%d. Futbolcu Adi : ",j+1);
			scanf("%s",lig.takim[i].oyuncu[j].futbolcu_ad);//takimddki i kaçýncý takým olduðunu, oyuncudaki j kaçýncý futbolcu olduðunu belirliyor.
			printf("%d. Futbolcu Yasi : ",j+1);
			scanf("%d",&lig.takim[i].oyuncu[j].futbolcu_yas);
			printf("%d. Futbolcu Mevki : ",j+1);
			scanf("%s",lig.takim[i].oyuncu[j].mevki);
		}
	}
	//Bilgileri atadýk þimdi yazdýrmaya baþlýyoruz.
	printf("\n\nLig Bilgileri\n");
	printf("Lig Adi : %s\n",lig.lig_adi);
	printf("Lig Ulkesi : %s\n",lig.lig_ulkesi);
	for(int i=0; i<2; i++)
	{
		printf("%d. Takimin Adi : %s\n",i+1,lig.takim[i].takim_adi);
		printf("%d. Takimin Puani : %d\n",i+1,lig.takim[i].takim_puan);
		printf("%d. Takimin Oyuncu Bilgileri \n",i+1);
		for(int j=0; j<2;j++)
		{
			printf("%s\t%d\t%s\n",lig.takim[i].oyuncu[j].futbolcu_ad,
								  lig.takim[i].oyuncu[j].futbolcu_yas,
								  lig.takim[i].oyuncu[j].mevki); //Ekran çýktýsý "Sado	 19	 Defans" olarak istediði için araya \t koyarak sýrayla yazdýrdýk.
		}
	}
	getch();
}
				
				
