#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char isim[10],soyisim[10];
	int secim;
	int sayi;
	printf("Sansli cekilis uygulamas�na hosgeldiniz:\n L�tfen isminizi giriniz:");
	scanf("%s",&isim);
	printf("\nL�tfen soyisim giriniz:");
	scanf("%s",&soyisim);
	
	printf("Lutfen bir islem seciniz:\n[1]..Sansli cekilisi dene\n[2]..Kullanici bilgilerini goruntule.");
	printf("\nLutfen birini secin");
	scanf("%d",&secim);
	
	if(secim==1)
	{
		printf("Sansli cekilise hosgeldiniz lutfen 1 ile 5 arasinda sayi seciniz:");
		scanf("%d",&sayi);
		srand(time(NULL));
		int randSayi=1+rand()%5;
		if(sayi==randSayi)
		{
			printf("Girdiginiz sayi=%d\nCekilisteki sayi=%d\n",sayi,randSayi);
			printf("Kazandiniz...");
		}
		else
		{
				printf("Girdiginiz sayi=%d\nCekilisteki sayi=%d\n",sayi,randSayi);
				printf("Kazanamadiniz...:()");
		}
		
		
		
	}
	
	else if(secim==2)
	{
		printf("Kullanici bilgileriniz\n �sim=%c\n Soyisminiz=%c",isim,soyisim);
	}
	 
	
	
	
	
}
