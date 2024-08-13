#include<stdio.h>
#include<string.h>
int main()
{
	char isim[50];
	char sifre[10];
	char isimVeri[]={"Suleyman"};
	char sifreVeri[]={"123456789"};
	
	printf("Lutfen isminizi giriniz:\n");
	scanf("%s",&isim);
	printf("Lutfen sifrenizi giriniz:\n");
	scanf("%s",&sifre);
	
	
	if(strcmp(isim,isimVeri)==0 && strcmp(sifre,sifreVeri)==0)
	{
		printf("Giris Basarili...");
	}
	else if(strcmp(isim,isimVeri)==0 || strcmp(sifre,sifreVeri)==0)
	{
		printf("Kullanici adi yada Sifre hatali...");
	}
	else
	{
		printf("Hatali giris lutfen tekrar deneyiniz...");
	}
	
}
