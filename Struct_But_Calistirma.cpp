/*STRUCT YAPISI
	1 TANE "lig" DE���KEN� �SM�NDE L�G EKLENECEK (L�G ADI VE �LKES� G�R�LECEK) 
	L�GE BA�LI OLARAK "takim" DE���KEN� �SM�NDE 2 TAKIM EKLENECEK (TAKIM ADI VE PUANI G�R�LECEK)
	TAKIMLARA BA�LI OLARAK "oyuncu" DE���KEN �SM�NDE 2 TANE FUTBOLCU EKLENECEK (FUTBOLCU ADI, YA�I VE OYNADI�I POZ�SYON EKLENECEK)
	�RNEK �IKTI :
				L�G B�LG�LER�
				L�G ADI : ALGOR�TMA S�PER L�G
				L�G�N �LKES� : T�RK�YE
				1. TAKIMIN ADI : B�TSPOR
				1. TAKIMIN PUANI : 25
				1. TAKIMIN OYUNCU B�LG�LER�
				SADO	19	DEFANS
				KEMAL	18	ORTASAHA
				2. TAKIMIN ADI : GE��CEZSPOR
				2. TAKIMIN PUANI : 50
				2. TAKIMIN OYUNCU B�LG�LER�
				GOKSU	23	FORVET
				BESTE	18	KALEC� 
				*/
				
#include <conio.h>
#include <stdio.h>
/* Burda struct yap�s�na en alt kademe olan futbolculardan ba�layarak en �st kademeye do�ru s�rayla yaz�yoruz.
   Sebebi : Derleyici program� ilk sat�rdan itibaren okuyaca�� i�in en ba�a ligler yap�s�n� yazsayd�k, "struct takimlar takim[2];" sat�r�n� okudu�unda
   			�nceki sat�rlarda takimlar yap�s�n� okumad��� i�in hata verirdi.*/
struct futbolcular{
	char futbolcu_ad[25]; //25 yazmam�z�n sebebi "en fazla 25 karakterden olu�abilir" �eklinde s�n�rland�rmak.
	int futbolcu_yas;
	char mevki[25];
}; 

struct takimlar{
	char takim_adi[25];
	int takim_puan;
	struct futbolcular oyuncu[2]; //Burada futbolcular yap�s�n� tak�mlar yap�s�yla birle�tirdik. Bunu "struct yap�_ad� de�i�kenad�[sayi]" �eklinde yazabilirsiniz.
};

struct ligler{
	char lig_adi[25];
	char lig_ulkesi[25];
	struct takimlar takim[2];
}lig;//ana yap�ya de�i�ken eklenece�i zaman buraya yaz�l�r. printf ya da scanf ile �a��rd���m�z zaman burdan ba�lanacak.

main(){
	//�nce Bilgileri al�p struct yap�s�n�n i�ine atayaca��z.
	printf("Lig Bilgilerini Giriniz\n");
	printf("Lig Adi : ");
	scanf("%s",lig.lig_adi);//%s ile yaz� de�erinde bir girdi yap�laca��n� belirledik. Sonra da girilecek bilginin lig de�i�keni i�indeki lig_adi k�sm�na ait oldu�unu belirledik.
	printf("Ligin Bulundugu Ulke : ");
	scanf("%s",lig.lig_ulkesi);
	for(int i=0; i<2;i++)//girilecek 2 adet tak�m oldu�u i�in bu �ekilde bir for d�ng�s� yazd�k.
	{
		printf("%d. Takim Bilgilerini Giriniz\n",i+1);/*for d�ng�s�nde direk i ye 1 dersek takimin 0. eleman� bo� kal�r.
											O y�zden for 0 dan ba�lay�p burda i+1 yazarak 1. Tak�m... �eklinde g�steriyoruz.*/
		printf("%d. Takimin Adi : ",i+1);
		scanf("%s",lig.takim[i].takim_adi);//takim yazd�ktan sonra [i] yazmam�z�n sebebi 2 adet tak�m eklenmesi. For'un i de�i�kenine g�re eklenecek.
		printf("%d. Takimin Puani : ",i+1);
		scanf("%d",&lig.takim[i].takim_puan);//%d ile say� de�erinde bir girdi al�naca��n� belirledik. scanf'te say� girdisi al�rken & i�aretini unutmay�n.
		printf("Futbolcu Bilgilerini Giriniz\n");
		for(int j=0;j<2;j++) //Bu for d�ng�s� de her tak�m i�in 2 adet futbolcu eklenmesi i�in.
		{
			printf("%d. Futbolcu Adi : ",j+1);
			scanf("%s",lig.takim[i].oyuncu[j].futbolcu_ad);//takimddki i ka��nc� tak�m oldu�unu, oyuncudaki j ka��nc� futbolcu oldu�unu belirliyor.
			printf("%d. Futbolcu Yasi : ",j+1);
			scanf("%d",&lig.takim[i].oyuncu[j].futbolcu_yas);
			printf("%d. Futbolcu Mevki : ",j+1);
			scanf("%s",lig.takim[i].oyuncu[j].mevki);
		}
	}
	//Bilgileri atad�k �imdi yazd�rmaya ba�l�yoruz.
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
								  lig.takim[i].oyuncu[j].mevki); //Ekran ��kt�s� "Sado	 19	 Defans" olarak istedi�i i�in araya \t koyarak s�rayla yazd�rd�k.
		}
	}
	getch();
}
				
				
