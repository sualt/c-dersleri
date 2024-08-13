#include<stdio.h>
#include<string.h>

void kullaniciBilgi(char isim[20])
{
	printf("Kullanici adiniz:%s ",isim);	
}


int main()
{
	
char isim[20];
printf("Kullanici adi:");
scanf("%s",&isim);

kullaniciBilgi(isim);	
	
}
