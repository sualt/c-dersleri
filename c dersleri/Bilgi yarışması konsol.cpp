#include<stdio.h>
#include<string.h>


void hosgeldinizFonksiyonu()
{
	printf("Bilgi yarismasina hosgeldiniz kurallari okuyunuz:\n"
	"Yarisamiz puan sistemlidir.\nLutfen kullanici adinizi dogru giriniz.\nUye degilseniz uye olunuz..."
	);
}

int secimFonksiyonu()
{
	int secim;
	printf("Lutfen secenklerden birini seciniz:\n[1]Giris Yap:\n[2]Kayit Ol:\n");
	scanf("%d",&secim);
	return secim;
	
}
int girisYap(char isim[200],char sifre[200])
{
	char alinanisim[200];
	char alinansifre[200];
	bool kontrol=false;
	while(kontrol==false){
	
	printf("Lutfen adinizi giriniz:");
	scanf("%s",&alinanisim);
	printf("Lutfen sifre:");
	scanf("%s",&alinansifre);
	if(strcmp(isim,alinanisim)==0 && strcmp(sifre,alinansifre)==0)
	{
		printf("Yarismaya Hosgeldiniz:\n");
		kontrol=true;
	}
	else if(strcmp(isim,alinanisim)==0 || strcmp(sifre,alinansifre)==0)
	printf("Ýsim veya Sifre Hatali...\n");
	else
	{
		printf("Lutfen kayit olunuz\n");
	}
	}
}

int kayitOl()
{
	char isim[200];
	char sifre[200];
	printf("Lutfen isim giriniz:");
	scanf("%s",&isim);
	printf("Lutfen sifre giriniz:");
	scanf("%s",&sifre);
	printf("KAyit Basarili\n Giris ekranina gidiyorsunuz\n*****\n");
	girisYap(isim,sifre);
}
int bilgiYarismasi()
{
	char cevap[2];
	int puan=0;
	printf("Yarisma basladi:\n");
	printf("Puaniniz=%d",puan);
	if(puan==0)
	{
		
	
	printf("[Soru-1]Asagidakilerden hangisi Tukiye Cumhuriyeti Baskentidir?\na-)Istanbul\nb-)Hatay\nc-)Edirne\nd-)Ankara\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"d")==0)
	{
		printf("Dogru Cevap\n");
		puan+=10;
		printf("Puaniniz=%d",puan);
	}
	else
	{
		printf("Hatali Cevap dogru cevap d dir.\n");
		printf("Puan=%d",puan);
	}
	}
		if(puan==10)
	{
		
	
	printf("[Soru-2]Asagidakilerden hangisi Ispanya Baskentidir?\na-)Madrid\nb-)Barcelona\nc-)Zaragoza\nd-)Sevilla\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"a")==0)
	{
		printf("Dogru Cevap\n");
		puan+=10;
		printf("Puaniniz=%d",puan);
	}
	else
	{
		printf("Hatali Cevap dogru cevap a dir.\n");
		printf("Puan=%d",puan);
	}
	}
	if(puan==20)
	{
		
	
	printf("[Soru-3]Asagidakilerden hangisi Almanya Baskentidir?\na-)Koln\nb-)Munih\nc-)Ossnabruck\nd-)Gotthingen\n");
	scanf("%s",&cevap);
	if(strcmp(cevap,"b")==0)
	{
		printf("Dogru Cevap\n");
		puan+=10;
		printf("Puaniniz=%d",puan);
	}
	else
	{
		printf("Hatali Cevap dogru cevap b dir.\n");
		printf("Puan=%d",puan);
	}
	}
	return puan;
}
int yarismaSon(int puan)
{
	printf("\n Yarisma sona erdi\nGuncel skor=%d",puan);
	
}



int main()
{
    char isim[200]="Mehmet";
	char sifre[200]="123456";	
	hosgeldinizFonksiyonu();
	int secim=secimFonksiyonu();
	
	if(secim==1)
	{
		girisYap(isim,sifre);
	}
	else if(secim==2)
	{
		kayitOl();
		
	}
	
	int skor=bilgiYarismasi();
	yarismaSon(skor);
	
	
	
}
