#include<stdio.h>
#include<string.h>

int main()


{
	char isim[5]="Alex";
	int parola=1907;
	int bakiye=1500;
	int secim;
	int gelenpara;
	int cekilecekpara;
	char gelecekisim[5];
	int gelecekparola;
	printf("Lutfen isminizi giriniz:");
	scanf("%s",&gelecekisim);
	printf("\nLutfen parola giriniz:");
	scanf("%d",&gelecekparola);
	
	if(strcmp(isim,gelecekisim)==0 && gelecekparola==parola)
	{
		printf("Bilgiler dogru...\n\n");
		printf("Asagidaki islemleden birini seciniz:\n[1]:Para Yatirma\n[2]Para Cekme\n[3]Kullanici Bilgilerini Gorme:");
		scanf("%d",&secim);
		if(secim==1)
		{
			printf("Ne kadar para yatirmak istersiniz:");
			scanf("%d",&gelenpara);
			bakiye=bakiye+gelenpara;
			printf("Para yatýrma isleminiz basarýyla gerceklesmistir...\nYeni bakiye=%d",bakiye);
		}
		else if(secim==2)
		{
			printf("Ne kadar cekmek istiyorsunuz:");
			scanf("%d",&cekilecekpara);
			if(cekilecekpara<=bakiye)
			{
			bakiye=bakiye-cekilecekpara;
			printf("Paranizi gule gule kullaniniz...\nYeni Bakiye=%d",bakiye);
			}
			else
			{
				printf("Uzgunuz maalesef bakiyeniz yetersiz...:(");
			}
		}
		else if(secim==3)
		{
			printf("Kullanici bilgileriniz geliyor...\n");
			printf("Kullanici adiniz=%s\nParolaniz=%d\nBakiyeniz=%d",isim,parola,bakiye);
		}
		else
		{
			printf("Hatali secim lutfen seciminizi gozden gecirin ve 1 ile 3 arasinda secim yapin..");
		}
		
	}
	else
	{
		printf("Bilgiler yanlis...");
	}
	
	
	
	
	
}
